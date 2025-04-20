#include "../../../inc/GUI/Components/circuitdesignview.h"
#include <QGraphicsSceneMouseEvent>
#include <QMouseEvent>
#include "circuitdesignview.h"
#include "../../application.h"

namespace gui
{





CircuitDesignView::CircuitDesignView(QWidget *parent)
    : QWidget(parent)
    , m_scene(new CustomGraphicsScene(this))
    , m_view(new QGraphicsView(m_scene, this))
    , m_layout(new QVBoxLayout(this))
    , m_zoomLevel(1.0)
{
    // Setup the graphics view
    m_view->setRenderHint(QPainter::Antialiasing);
    m_view->setDragMode(QGraphicsView::RubberBandDrag);
    m_view->setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
    m_view->setResizeAnchor(QGraphicsView::AnchorUnderMouse);
    
    // Setup the layout
    m_layout->setContentsMargins(0, 0, 0, 0);
    m_layout->addWidget(m_view);
    setLayout(m_layout);
    
    // Connect scene changes to the sceneChanged signal
    connect ( m_scene, &QGraphicsScene::changed, this, &CircuitDesignView::sceneChanged );
    connect ( this, &CircuitDesignView::addGate, MyApplication::instance(), &MyApplication::addGateInDoc );
}

CustomGraphicsScene *CircuitDesignView::scene() const
{
    return m_scene;
}

void CircuitDesignView::zoomIn ()
{
    m_zoomLevel *= 1.2;
    m_view->scale ( 1.2, 1.2 );

}

void CircuitDesignView::zoomOut ()
{
    m_zoomLevel *= 0.8;
    m_view->scale(0.8, 0.8);

}

void CircuitDesignView::resetZoom ()
{
    m_view->resetTransform();
    m_zoomLevel = 1.0;
    
}

void CircuitDesignView::clearScene ()
{
    m_scene->clear();
}

void CircuitDesignView::addLogicGate ( const QString &gateType )
{
    // Create a scalable graphics item styled as a logic gate
    //AndGraphicsItem *item = m_scene->addScalableItem();
    AGraphicsItem *item = m_scene->addScalableItem( gateType );
    emit addGate( gateType );
    // Position at view center
    QPointF viewCenter = m_view->mapToScene( m_view->viewport()->rect().center() );
    item->setPos( viewCenter );
    
    // Emit the scene changed signal
    emit sceneChanged();
}








} // namespace gui
