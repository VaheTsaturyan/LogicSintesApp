#pragma once
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsItem>
#include <QGraphicsLineItem>
#include <QPointF>
#include <QVector>

#include "graphicItem.h"

namespace gui
{

class ConnectionLine : public QObject, public QGraphicsLineItem 
{
    Q_OBJECT
public:
    explicit ConnectionLine(QGraphicsItem *parent = nullptr);
    ~ConnectionLine();
    
    // Store source and target IDs
    void setSourceItem(AGraphicsItem* source) { m_sourceItem = source; }
    void setTargetItem(AGraphicsItem* target) { m_targetItem = target; }
    
    AGraphicsItem* sourceItem() const { return m_sourceItem; }
    AGraphicsItem* targetItem() const { return m_targetItem; }
    
    // Method to finalize creation and emit the signal
    void finishCreation();
    
    // Override mouse events to handle the endpoint selection and dragging
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;
    
    // Custom paint method to draw endpoint circles and Manhattan path
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;
    
signals:
    // Signal emitted when the line is created or endpoints are moved
    void lineCreated(const QPointF &sourcePoint, const QPointF &targetPoint);
    
private:
    // Enum to track which endpoint is being modified
    enum EndpointType { 
        Source, 
        Target, 
        None 
    };

private:
    // Helper method to check if position is on an endpoint
    EndpointType hitTestEndpoint(const QPointF &pos);
    
    // Helper method to delete the line
    void deleteLine();
    
    // Helper function to compute points for Manhattan path
    QVector<QPointF> getManhattanPoints();
    
private:
    // Constants
    AGraphicsItem* m_sourceItem;
    AGraphicsItem* m_targetItem;
    bool m_isDragging;
    EndpointType m_currentEndpoint;
    const qreal ENDPOINT_RADIUS = 9.0 / 2.0; // 9 pixels thickness means radius of 4.5
    const qreal ENDPOINT_HITAREA = 10.0;     // Slightly larger hit area for easier selection
};

} //namespace gui