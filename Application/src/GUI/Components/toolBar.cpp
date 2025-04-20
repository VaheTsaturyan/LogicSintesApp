#include "../../../inc/GUI/Components/toolBar.h"


namespace gui
{


///////////////////////////////////////////////////////////////////
////undo redo tool bar impl
//////////////////////////////////////////////////////////////////
UndoRedoToolBar::UndoRedoToolBar(QWidget *parent)
    : QToolBar(parent)
{
    setupActions();
    
}

void UndoRedoToolBar::setupActions()
{
    undoAction = new QAction("Undo", this);
    redoAction = new QAction("Redo", this);
    
    undoAction->setIcon(QIcon("/home/vts/repos/LogicSintesApp/Resources/GuiElements/undo.png"));
    redoAction->setIcon(QIcon("/home/vts/repos/LogicSintesApp/Resources/GuiElements/redo.png"));
    
    connect(undoAction, &QAction::triggered, this, [this]() {
        emit actionTriggered("undo");
    });
    connect(redoAction, &QAction::triggered, this, [this]() {
        emit actionTriggered("redo");
    });

    addAction(undoAction);
    addAction(redoAction);
}



///////////////////////////////////////////////////////////////////
////Zoom Tool Bar impl
//////////////////////////////////////////////////////////////////
ZoomToolBar::ZoomToolBar(QWidget *parent)
    : QToolBar(parent)
{
    setupActions();
}

void ZoomToolBar::setupActions()
{
    zoomIn = new QAction("zoomIn", this);
    zoomOut = new QAction("zoomOut", this);
    resetZoom = new QAction("resetZoom", this);
    
    zoomIn->setIcon(QIcon("/home/vts/repos/LogicSintesApp/Resources/GuiElements/zoom_In.png"));
    zoomOut->setIcon(QIcon("/home/vts/repos/LogicSintesApp/Resources/GuiElements/zoom_out.png"));
    resetZoom->setIcon(QIcon("/home/vts/repos/LogicSintesApp/Resources/GuiElements/reset_zoom.png"));
    
    
    connect( zoomIn, &QAction::triggered, this, [this]() {
        emit actionTriggered("zoomIn");
    });
    connect(zoomOut, &QAction::triggered, this, [this]() {
        emit actionTriggered("zoomOut");
    });

    connect(resetZoom, &QAction::triggered, this, [this]() {
        emit actionTriggered("resetZoom");
    });


    addAction(zoomIn);
    addAction(zoomOut);
    addAction(resetZoom);
}


///////////////////////////////////////////////////////////////////
////Add Project Tool Bar impl
//////////////////////////////////////////////////////////////////
AddProjectToolBar::AddProjectToolBar(QWidget *parent)
    : QToolBar(parent)
{
    setupActions();
}

void AddProjectToolBar::setupActions()
{
    addProject = new QAction("Add Project", this);
   
    
    connect( addProject, &QAction::triggered, this, [this]() {
        emit actionTriggered();
    });
 
    addAction(addProject);
}


} // namespace gui
