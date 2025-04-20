#pragma once 
#include <QMainWindow>
#include <QList>
#include "./Components/dockWidget.h"
#include "./Components/fileDialog.h"
#include "./Components/toolBar.h"
#include "./Components/menu.h"
#include "./Components/circuitdesignview.h"

namespace gui
{
 
class MainWindow : public QMainWindow
{
Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
private:
    void initComponents();
    void addComponents();
    void connectSignals();


private slots:
    void newFile();
    void openFile();
    void saveFile();
    void addProjectDialog();
    void zoomH(const QString& eventName);
    void addLogicGate(const QString &gateType);
    void updateUndoRedoActions();
    void redoActions(const QString& actionName);
    void conectFiltr ( const QPointF &sourcePoint, const QPointF &targetPoint );
    
signals:
    void addGate(const QString& gateType);
    void addConnect( AGraphicsItem* ithemC, AGraphicsItem* ithemI);
    void removeConnect(unsigned int id1, unsigned int id2);
    void removeGate(unsigned int id);
    void updateView();

private:
    LogicGatesDockWidget* dockWidget;    
    UndoRedoToolBar* undoRedoToolBar;
    AddProjectToolBar* addProject;
    ZoomToolBar* zoom;
    FileMenu *fileMenu;

    // New central widget
    CircuitDesignView *circuitView;
};
    

} // namespace gui
