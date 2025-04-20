#include "../../../inc/GUI/Components/connectLine.h"
#include "../../application.h"
#include <QPainter>
#include <QPainterPath>
#include <QGraphicsScene>

namespace gui {

ConnectionLine::ConnectionLine(QGraphicsItem *parent) 
    : QGraphicsLineItem(parent),
      m_sourceItem(nullptr),
      m_targetItem(nullptr),
      m_isDragging(false),
      m_currentEndpoint(None)
{
    setPen(QPen(Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    setFlag(QGraphicsItem::ItemIsSelectable, true);
    setAcceptHoverEvents(true);
    
    connect(this, &ConnectionLine::lineCreated, MyApplication::instance(), &MyApplication::lineAndGraphicSchenBridg);
}

ConnectionLine::~ConnectionLine()
{
    // No special cleanup needed
}

void ConnectionLine::finishCreation()
{
    // Emit signal with current endpoint coordinates
    emit lineCreated(line().p1(), line().p2());
}

QVector<QPointF> ConnectionLine::getManhattanPoints()
{
    QVector<QPointF> points;
    
    QPointF p1 = line().p1();
    QPointF p2 = line().p2();
    
    // Calculate the midpoint for a simple L-shape
    // Choose whether to go horizontal first or vertical first
    // based on the relative positions
    if (qAbs(p2.x() - p1.x()) > qAbs(p2.y() - p1.y())) {
        // Horizontal first
        points.append(QPointF(p2.x(), p1.y()));
    } else {
        // Vertical first
        points.append(QPointF(p1.x(), p2.y()));
    }
    
    return points;
}

void ConnectionLine::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    // Don't call the parent's paint method, we'll draw everything ourselves
    
    // Get the points for the path
    QPointF p1 = line().p1();
    QPointF p2 = line().p2();
    QVector<QPointF> intermediatePoints = getManhattanPoints();
    
    // Set up the pen
    painter->setPen(QPen(Qt::green, 1));
    
    // Draw the line segments
    painter->drawLine(p1, intermediatePoints[0]);
    painter->drawLine(intermediatePoints[0], p2);
    
    // Now draw the endpoint circles
    painter->setPen(QPen(Qt::green, 1));
    painter->setBrush(QBrush(Qt::white));
    
    // Draw source endpoint circle
    painter->drawEllipse(p1, ENDPOINT_RADIUS, ENDPOINT_RADIUS);
    
    // Draw target endpoint circle
    painter->drawEllipse(p2, ENDPOINT_RADIUS, ENDPOINT_RADIUS);
}

ConnectionLine::EndpointType ConnectionLine::hitTestEndpoint(const QPointF &pos)
{
    QPointF sourcePoint = line().p1();
    QPointF targetPoint = line().p2();
    
    // Calculate distance to endpoints
    qreal distToSource = QLineF(pos, sourcePoint).length();
    qreal distToTarget = QLineF(pos, targetPoint).length();
    
    // Check if click is within the hit area of either endpoint
    if (distToSource < ENDPOINT_HITAREA) {
        return Source;
    } else if (distToTarget < ENDPOINT_HITAREA) {
        return Target;
    }
    
    return None;
}

void ConnectionLine::deleteLine()
{
    if (scene()) {
        scene()->removeItem(this);
    }
    deleteLater();
}

void ConnectionLine::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        // Check if click is on an endpoint
        m_currentEndpoint = hitTestEndpoint(event->pos());
        
        if (m_currentEndpoint != None) {
            m_isDragging = true;
            event->accept();
            return;
        }
    } else if (event->button() == Qt::RightButton) {
        // Right-click on line - delete it
        deleteLine();
        event->accept();
        return;
    }
    
    // Otherwise, pass the event to parent
    QGraphicsLineItem::mousePressEvent(event);
}

void ConnectionLine::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        // Left double-click - delete the line
        deleteLine();
        event->accept();
        return;
    }
    
    QGraphicsLineItem::mouseDoubleClickEvent(event);
}

void ConnectionLine::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if (m_isDragging && m_currentEndpoint != None) {
        // Get current line
        QLineF currentLine = line();
        
        // Update the appropriate endpoint
        if (m_currentEndpoint == Source) {
            currentLine.setP1(event->pos());
        } else if (m_currentEndpoint == Target) {
            currentLine.setP2(event->pos());
        }
        
        // Set the new line
        setLine(currentLine);
        event->accept();
    } else {
        QGraphicsLineItem::mouseMoveEvent(event);
    }
}

void ConnectionLine::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    if (m_isDragging && event->button() == Qt::LeftButton) {
        m_isDragging = false;
        
        // Emit signal with updated endpoint coordinates
        emit lineCreated(line().p1(), line().p2());
        
        event->accept();
        
        // Reset current endpoint after handling
        m_currentEndpoint = None;
    } else {
        QGraphicsLineItem::mouseReleaseEvent(event);
    }
}

} // namespace gui