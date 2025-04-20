#pragma once 


#include <QWidget>
#include <QGraphicsView>
#include <QVBoxLayout>
#include "./graphicScen.h"

namespace gui
{
    

    
class CircuitDesignView : public QWidget
{
Q_OBJECT

public:
explicit CircuitDesignView( QWidget *parent = nullptr );
    
    // Access to the scene for saving/loading operations
    CustomGraphicsScene* scene () const;
    
    // Methods to interact with the view
    void zoomIn ();
    void zoomOut ();
    void resetZoom ();
    void clearScene ();
    
public slots:
    // Slot for handling adding logic gate items from LogicGatesDockWidget
    void addLogicGate( const QString &gateType );
    
signals:
    // Signal emitted when scene changes, to update undo/redo actions
    void sceneChanged();
    void addGate( const QString& gateType );
    
private:
    CustomGraphicsScene* m_scene;
    QGraphicsView *m_view;
    QVBoxLayout *m_layout;
    
    // Current zoom level
    qreal m_zoomLevel;
};



} // namespace gui

