#include "../../inc/GUI/mainWindow.h"
#include <QMenuBar>
#include <QMenu>
#include <QDebug>
#include "mainWindow.h"
#include "../application.h"
#include <iostream>

namespace gui
{
    
    
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{

    initComponents();
    addComponents();
    connectSignals();

}

void MainWindow::initComponents()
{
    fileMenu = new FileMenu(this);
    dockWidget = new LogicGatesDockWidget(this);
    undoRedoToolBar = new UndoRedoToolBar(this);
    addProject = new AddProjectToolBar(this);
    zoom = new ZoomToolBar(this);
    circuitView = new CircuitDesignView(this);
}


void MainWindow::addComponents()
{
    addDockWidget(Qt::RightDockWidgetArea, dockWidget);
    addToolBar(Qt::TopToolBarArea, undoRedoToolBar);
    addToolBar(Qt::TopToolBarArea, addProject);
    addToolBar(Qt::TopToolBarArea, zoom);
    menuBar()->addMenu(fileMenu);
    setCentralWidget(circuitView);
}


void MainWindow::connectSignals()
{

    connect( fileMenu, &FileMenu::newFileRequested, this, &MainWindow::newFile );
    connect( fileMenu, &FileMenu::openFileRequested, this, &MainWindow::openFile );
    connect( fileMenu, &FileMenu::saveFileRequested, this, &MainWindow::saveFile );
    connect( fileMenu, &FileMenu::exitRequested, this, &MainWindow::close );
    connect( addProject, &AddProjectToolBar::actionTriggered, this, &MainWindow::addProjectDialog );
    connect( zoom, &ZoomToolBar::actionTriggered, this, &MainWindow::zoomH );
    connect( undoRedoToolBar, &UndoRedoToolBar::actionTriggered, this, &MainWindow::redoActions );

    connect( dockWidget, SIGNAL(logicGateSelected(const QString&)), 
            this, SLOT(addLogicGate(const QString&)));
    
    connect( circuitView, &CircuitDesignView::sceneChanged, 
            this, &MainWindow::updateUndoRedoActions);

    connect( this, &MainWindow::addGate, MyApplication::instance(), &MyApplication::addGateInDoc );
    connect( this, &MainWindow::addConnect, MyApplication::instance(), &MyApplication::addConnect );
    connect( MyApplication::instance(), &MyApplication::SignaLLineAndGraphicSchenBridg, this, &MainWindow::conectFiltr );
    
    // Connect undo/redo toolbar to QUndoStack (assuming it has one)
    // This would depend on your UndoRedoToolBar implementation
    // connect(undoRedoToolBar, SIGNAL(undoTriggered()), undoStack, SLOT(undo()));
    // connect(undoRedoToolBar, SIGNAL(redoTriggered()), undoStack, SLOT(redo()));
}


void MainWindow::newFile()
{
    circuitView->clearScene();
    qDebug() << "New file requested";
}

void MainWindow::openFile()
{
    JsonFileDialog* openDialog = new JsonFileDialog(this);
    openDialog->show();
}

void MainWindow::saveFile()
{
    SaveJsonFileDialog* saveDialog = new SaveJsonFileDialog(this);
    saveDialog->show();
}

void MainWindow::addProjectDialog ()
{
    AddProjectFileDialog* addProjectDialog = new AddProjectFileDialog(this);
    addProjectDialog->show();
}

void MainWindow::zoomH( const QString &eventName )
{
    if( eventName == "zoomIn" ){
        circuitView->zoomIn ();
    }else if( "zoomOut" ){
        circuitView->zoomOut ();
    }else if( "resetZoom" ){
        circuitView->resetZoom ();
    }
}

void MainWindow::addLogicGate( const QString &gateType )
{
    circuitView->addLogicGate( gateType );
    emit addGate( gateType );

}

void MainWindow::redoActions( const QString &actionName )
{
    std::cout<<actionName.toStdString()<<std::endl;
}

void MainWindow::conectFiltr(const QPointF &sourcePoint, const QPointF &targetPoint)
{
    CustomGraphicsScene* schen =  circuitView->scene ();
    QGraphicsItem* qItemC = schen->itemAt( sourcePoint, QTransform() );
    QGraphicsItem* qItemI = schen->itemAt( targetPoint, QTransform() );
    if ( qItemC == nullptr || qItemI == nullptr ) { return; }
    
    AGraphicsItem* itemC = qgraphicsitem_cast<AGraphicsItem*>(qItemC);
    AGraphicsItem* itemI = qgraphicsitem_cast<AGraphicsItem*>(qItemI);

    emit addConnect( itemC, itemI );
}

void MainWindow::updateUndoRedoActions()
{
    // Update undo/redo actions based on changes to the scene
    // This would depend on your UndoRedoToolBar implementation
    // undoRedoToolBar->setUndoEnabled(undoStack->canUndo());
    // undoRedoToolBar->setRedoEnabled(undoStack->canRedo());
}


} // namespace gui