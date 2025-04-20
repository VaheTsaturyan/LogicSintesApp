#pragma once
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsItem>
#include <QGraphicsLineItem>
#include <QGraphicsRectItem>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>

#include <unordered_map>
#include <string>
#include <vector>

#include "graphicItem.h"
#include "connectLine.h"

namespace gui
{

// Selection Rectangle class to draw squares around selected items
class SelectionRect : public QGraphicsRectItem
{
public:
    explicit SelectionRect(QGraphicsItem* targetItem = nullptr, QGraphicsItem* parent = nullptr);
    
    void updatePosition();
    void setTargetItem(QGraphicsItem* item);
    QGraphicsItem* targetItem() const { return m_targetItem; }
    
    // Custom paint method to draw selection handles
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget = nullptr) override;
    
    
    private:
    QGraphicsItem* m_targetItem;
    const qreal HANDLE_SIZE = 8.0; // Size of selection handles
};

//////////////////////////////////////////////////////////////////////////////////
///Custom Graphic scen
/////////////////////////////////////////////////////////////////////////////////
class CustomGraphicsScene : public QGraphicsScene
{
Q_OBJECT
public:
    CustomGraphicsScene(QObject *parent = nullptr);
    QList<AGraphicsItem*> selectedScalableItems() const;

    // New method to get all selectable items (including ConnectionLines)
    QList<QGraphicsItem*> allSelectedItems() const;
    // Delete the entire contents of the graphics scene
    void clearScene();
    // Add a connection line with specified start and end coordinates
    ConnectionLine* addConnectionLine(const QPointF& startPos, const QPointF& endPos);
    // Add a graphics item with specified coordinates and type
    AGraphicsItem* addScalableItemAtPosition(const QString& gateType, const QPointF& pos);

public slots:
    AGraphicsItem* addScalableItem(const QString &gateType);
    void scaleUpSelected();
    void scaleDownSelected();

signals:
    // Signals for selections and connections
    void itemsSelected(QVector<qint64> itemIds);
    void itemsConnected(qint64 sourceId, qint64 targetId);
    
    // New signal that passes all selected elements (not just AGraphicsItems)
    void allItemsSelected(QList<QGraphicsItem*> items);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;
    void wheelEvent(QGraphicsSceneWheelEvent *event) override;

private slots:
    // New slot to handle selection changes
    void handleSelectionChanged();
    
    // Methods to update selection rectangles
    void updateSelectionRects();
    void clearSelectionRects();

private:
    void initGateMap();
    AGraphicsItem* itemAtPosition(const QPointF& pos);

private:
    std::unordered_map<std::string, AGraphicsItem*> gateMap;
    
    // For line drawing with right button
    bool m_rightButtonDown;
    QPointF m_lineStartPos;
    ConnectionLine* m_currentLine;
    AGraphicsItem* m_sourceItem;
    
    // For selection rectangles
    QList<SelectionRect*> m_selectionRects;
};

} // namespace gui