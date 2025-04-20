#pragma once

#include <QToolBar>
#include <QAction>


namespace gui
{
///////////////////////////////////////////////////////////////////////////////////////////    
////////undo redo tool bar declaretion    
///////////////////////////////////////////////////////////////////////////////////////////    
class UndoRedoToolBar : public QToolBar {
    Q_OBJECT
public:
    explicit UndoRedoToolBar(QWidget *parent = nullptr);
    
    signals:
    void actionTriggered(const QString& actionName);
    
    private:
    QAction* undoAction;
    QAction* redoAction;
    
    void setupActions();
};


///////////////////////////////////////////////////////////////////////////////////////////    
////////Canva Hendring    
///////////////////////////////////////////////////////////////////////////////////////////    
class ZoomToolBar : public QToolBar {
    Q_OBJECT
public:
    explicit ZoomToolBar(QWidget *parent = nullptr);
    
    signals:
    void actionTriggered(const QString& actionName);
    
    private:
    QAction* zoomIn;
    QAction* zoomOut;
    QAction* resetZoom;
    
    void setupActions();
};


///////////////////////////////////////////////////////////////////////////////////////////    
////////Add Project tool    
///////////////////////////////////////////////////////////////////////////////////////////    
class AddProjectToolBar : public QToolBar {
    Q_OBJECT
public:
    explicit AddProjectToolBar(QWidget *parent = nullptr);
    
    signals:
    void actionTriggered();
    
    private:
    QAction* addProject;
    
    void setupActions();
};



} // namespace gui