#pragma once

#include <QGraphicsItem>
#include <QObject>
#include <QPointF>
#include <QPainter>
#include <QPixmap>
#include <QTimer>
#include <QTime>
#include <memory>

namespace gui{

class AGraphicsItem : public QObject, public QGraphicsItem
{
    Q_OBJECT
    Q_INTERFACES(QGraphicsItem)

public:
    enum MouseButtonId {
        LeftButton = 1,
        RightButton = 2
    };

    AGraphicsItem(QGraphicsItem *parent = nullptr);
    virtual ~AGraphicsItem();
    
    // Clone method for gate creation
    virtual AGraphicsItem* clone(); 
        
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    
    // Get item ID
    qint64 id() const;

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event) override; 
    QVariant itemChange(GraphicsItemChange change, const QVariant &value) override;
    
public slots:
    void scaleUp();
    void scaleDown();
    void setCustomScale(qreal scale);
    

signals:
    void scaleChanged(qreal scale);
    void mouseButtonPressed(int buttonId);
    void mouseButtonReleased(int buttonId, QPointF pos);
    void rightButtonQuickPress(int id);
    void rightButtonHold(QPointF pos);
    void positionChanged(qint64 itemId, QPointF pos);
    void inputSubmitted(qint64 itemId, QString text);
    void itemSelected(qint64 itemId);
    void itemDeleted(qint64 itemId);

private slots:
    void handleRightButtonTimeout();

private:
    void showContextMenu(const QPointF &screenPos);
    void showNumberInputDialog();

    qreal m_scale;
    QPointF m_lastMousePos;
    bool m_isDragging;
    
    // Right button press tracking
    QTimer m_rightButtonTimer;
    QTime m_rightButtonPressTime;
    QPointF m_rightButtonPressPos;
    bool m_leftButtonPressed;
    bool m_rightButtonPressed;
};
    

//////////////////////////////////////////////////////////////////////////////////////////////////
///And Graphic Ithem
/////////////////////////////////////////////////////////////////////////////////////////////////
class AndGraphicsItem : public AGraphicsItem
{
Q_OBJECT
Q_INTERFACES(QGraphicsItem)

public:
    AndGraphicsItem(QGraphicsItem *parent = nullptr);

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    AGraphicsItem* clone() override;
};


//////////////////////////////////////////////////////////////////////////////////////////////////
///Or Graphic Ithem
/////////////////////////////////////////////////////////////////////////////////////////////////
class OrGraphicsItem : public AGraphicsItem
{
    Q_OBJECT
    Q_INTERFACES(QGraphicsItem)
public:
    OrGraphicsItem(QGraphicsItem *parent = nullptr);
            
    // Implement these pure virtual methods from QGraphicsItem
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    AGraphicsItem* clone() override;
};




//////////////////////////////////////////////////////////////////////////////////////////////////
//Nand Graphic Ithem
/////////////////////////////////////////////////////////////////////////////////////////////////
class NandGraphicsItem : public AGraphicsItem
{
    Q_OBJECT
Q_INTERFACES(QGraphicsItem)
public:
    NandGraphicsItem(QGraphicsItem *parent = nullptr);
            
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    AGraphicsItem* clone() override;
};




//////////////////////////////////////////////////////////////////////////////////////////////////
///Nor Graphic Ithem
/////////////////////////////////////////////////////////////////////////////////////////////////
class NorGraphicsItem : public AGraphicsItem
{
Q_OBJECT
Q_INTERFACES(QGraphicsItem)

public:
    NorGraphicsItem(QGraphicsItem *parent = nullptr);

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    AGraphicsItem* clone() override;
};




//////////////////////////////////////////////////////////////////////////////////////////////////
///Not Graphic Ithem
/////////////////////////////////////////////////////////////////////////////////////////////////
class NotGraphicsItem : public AGraphicsItem
{
Q_OBJECT
Q_INTERFACES(QGraphicsItem)

public:
    NotGraphicsItem(QGraphicsItem *parent = nullptr);

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    AGraphicsItem* clone() override;
};


//////////////////////////////////////////////////////////////////////////////////////////////////
///Xor Graphic Ithem
/////////////////////////////////////////////////////////////////////////////////////////////////
class XorGraphicsItem : public AGraphicsItem
{
Q_OBJECT
Q_INTERFACES(QGraphicsItem)

public:
    XorGraphicsItem(QGraphicsItem *parent = nullptr);

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    AGraphicsItem* clone() override;
};



//////////////////////////////////////////////////////////////////////////////////////////////////
///Xnor Graphic Ithem
/////////////////////////////////////////////////////////////////////////////////////////////////
class XnorGraphicsItem : public AGraphicsItem
{
Q_OBJECT
Q_INTERFACES(QGraphicsItem)

public:
    XnorGraphicsItem(QGraphicsItem *parent = nullptr);

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    AGraphicsItem* clone() override;
};

//////////////////////////////////////////////////////////////////////////////////////////////////
///input Graphic Ithem
/////////////////////////////////////////////////////////////////////////////////////////////////
class InputGraphicIthem : public AGraphicsItem
{
Q_OBJECT
Q_INTERFACES(QGraphicsItem)

public:
    InputGraphicIthem(QGraphicsItem *parent = nullptr);

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    AGraphicsItem* clone() override;
};


//////////////////////////////////////////////////////////////////////////////////////////////////
///Xnor Graphic Ithem
/////////////////////////////////////////////////////////////////////////////////////////////////
class OutputGraphicIthem : public AGraphicsItem
{
Q_OBJECT
Q_INTERFACES(QGraphicsItem)

public:
    OutputGraphicIthem (QGraphicsItem *parent = nullptr);

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    AGraphicsItem* clone() override;
};


}//namespace gui


/////////////////////////////////////
/*
*/