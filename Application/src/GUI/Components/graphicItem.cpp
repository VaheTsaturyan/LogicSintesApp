#include "../../../inc/GUI/Components/graphicItem.h"
#include "../../../inc/GUI/Components/graphicScen.h"

#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneMouseEvent>
#include <QPainter>
#include <QTime>
#include <QMenu>
#include <QDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QApplication>

namespace gui
{

AGraphicsItem::AGraphicsItem(QGraphicsItem *parent)
    : QGraphicsItem(parent), 
      m_scale(1.0), 
      m_isDragging(false),
      m_leftButtonPressed(false),
      m_rightButtonPressed(false)
{
    setFlag(QGraphicsItem::ItemIsMovable);
    setFlag(QGraphicsItem::ItemIsSelectable);
    setFlag(QGraphicsItem::ItemSendsGeometryChanges);
    setAcceptHoverEvents(true);
    setAcceptedMouseButtons(Qt::LeftButton | Qt::RightButton); // Ensure we accept both mouse buttons
    
    // Configure right button timer
    m_rightButtonTimer.setSingleShot(true);
    connect(&m_rightButtonTimer, &QTimer::timeout, this, &AGraphicsItem::handleRightButtonTimeout);
}

AGraphicsItem::~AGraphicsItem()
{
    // Clean up as needed
}

AGraphicsItem *AGraphicsItem::clone()
{
    return new AGraphicsItem(); 
}

QRectF AGraphicsItem::boundingRect() const
{
    // This should be customized for your specific item
    return QRectF(-50, -50, 100, 100);
}

void AGraphicsItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    // Basic visualization for the item
    QColor fillColor = isSelected() ? Qt::lightGray : Qt::white;
    painter->setBrush(fillColor);
    painter->setPen(QPen(Qt::black, 2));
    painter->drawRect(boundingRect());
    
    // Draw item ID for reference
    painter->drawText(boundingRect(), Qt::AlignCenter, QString::number(id()));
}

void AGraphicsItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_lastMousePos = event->pos();
        m_isDragging = true;
        m_leftButtonPressed = true;
        emit mouseButtonPressed(LeftButton);
    }
    else if (event->button() == Qt::RightButton) {
        m_rightButtonPressed = true;
        m_rightButtonPressPos = event->pos();
        
        // Show the context menu
        showContextMenu(event->screenPos());
        
        if (!m_leftButtonPressed) {
            emit mouseButtonPressed(RightButton);
        }
    }
    
    QGraphicsItem::mousePressEvent(event);
}

void AGraphicsItem::showContextMenu(const QPointF &screenPos)
{
    QMenu contextMenu;
    
    QAction *deleteAction = contextMenu.addAction("Delete");
    QAction *connectAction = contextMenu.addAction("Connect");
    QAction *cancelAction = contextMenu.addAction("Cancel1");
    
    QAction *selectedAction = contextMenu.exec(screenPos.toPoint());
    
    if (selectedAction == deleteAction) {
        // Delete this item
        scene()->removeItem(this);
        deleteLater();
    } 
    else if (selectedAction == connectAction) {
        // Show the number input dialog
        showNumberInputDialog();
    }
    // If cancel is selected or menu is dismissed, do nothing
}

void AGraphicsItem::showNumberInputDialog()
{
    QDialog dialog;
    dialog.setWindowTitle("Enter Number");
    
    QVBoxLayout *layout = new QVBoxLayout(&dialog);
    
    QLabel *label = new QLabel("Enter a number:", &dialog);
    layout->addWidget(label);
    
    QLineEdit *lineEdit = new QLineEdit(&dialog);
    lineEdit->setPlaceholderText("Enter number here");
    layout->addWidget(lineEdit);
    
    QHBoxLayout *buttonLayout = new QHBoxLayout();
    
    QPushButton *okButton = new QPushButton("OK", &dialog);
    QPushButton *cancelButton = new QPushButton("Cancel", &dialog);
    
    buttonLayout->addWidget(okButton);
    buttonLayout->addWidget(cancelButton);
    
    layout->addLayout(buttonLayout);
    
    // Connect buttons
    connect(okButton, &QPushButton::clicked, [&]() {
        QString enteredText = lineEdit->text();
        
        // Emit a signal with the item ID and the entered text
        emit inputSubmitted(id(), enteredText);
        
        dialog.accept();
    });
    
    connect(cancelButton, &QPushButton::clicked, &dialog, &QDialog::reject);
    
    dialog.exec();
}

void AGraphicsItem::handleRightButtonTimeout()
{
    // If timer expires, it means right button was held longer than 0.5 seconds
    if (m_rightButtonPressed) {
        emit rightButtonHold(m_rightButtonPressPos);
    }
}

void AGraphicsItem::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if (m_isDragging) {
        // Move the item based on mouse movement
        QPointF delta = event->pos() - m_lastMousePos;
        moveBy(delta.x(), delta.y());
        m_lastMousePos = event->pos();
    }
    else {
        QGraphicsItem::mouseMoveEvent(event);
    }
}

void AGraphicsItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_isDragging = false;
        m_leftButtonPressed = false;
        
        // Send coordinates back
        emit positionChanged(id(), mapToScene(event->pos()));
        emit mouseButtonReleased(LeftButton, event->pos());

        // If this item is selected (could be from a rubberband), emit a signal
        if (isSelected()) {
            emit itemSelected(id());
        }
    }
    else if (event->button() == Qt::RightButton) {
        m_rightButtonPressed = false;
        
        emit mouseButtonReleased(RightButton, event->pos());
    }
    
    QGraphicsItem::mouseReleaseEvent(event);
}

void AGraphicsItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        // Emit signal before deletion (optional - so other components can react)
        emit itemDeleted(id());
        
        // Delete this item
        scene()->removeItem(this);
        deleteLater();
        
        // No need to call base class implementation as we're deleting the item
        return;
    }
    
    // For other buttons, pass to base class
    QGraphicsItem::mouseDoubleClickEvent(event);
}

QVariant AGraphicsItem::itemChange(GraphicsItemChange change, const QVariant &value)
{
    if (change == ItemSelectedChange && value.toBool()) {
        // Item is becoming selected
        emit itemSelected(id());
    }
    
    return QGraphicsItem::itemChange(change, value);
}

void AGraphicsItem::scaleUp()
{
    // Increase scale
    m_scale *= 1.2;
    setScale(m_scale);
    emit scaleChanged(m_scale);
}

void AGraphicsItem::scaleDown()
{
    // Decrease scale
    m_scale *= 0.8;
    setScale(m_scale);
    emit scaleChanged(m_scale);
}

void AGraphicsItem::setCustomScale(qreal scale)
{
    if (scale > 0) {
        m_scale = scale;
        setScale(m_scale);
        emit scaleChanged(m_scale);
    }
}

qint64 AGraphicsItem::id() const
{
    // Convert pointer address to integer for unique ID
    return reinterpret_cast<qint64>(this);
}


//////////////////////////////////////////////////////////////////////////////////////////////////
///And Graphic Ithem
/////////////////////////////////////////////////////////////////////////////////////////////////
AndGraphicsItem::AndGraphicsItem(QGraphicsItem *parent)
: AGraphicsItem(parent)
{
}

void AndGraphicsItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    // This should be customized for your specific item
    //painter->drawRect(boundingRect());
    painter->drawImage(boundingRect(), QImage("/home/vts/repos/LogicSintesApp/Resources/LogicGates/and.png"));
    QRectF rect = boundingRect();
    painter->setPen(QPen(Qt::blue));
    // painter->drawPoint(rect.y()+rect.height(), rect.x()+rect.width()/2);
    // painter->setPen(QPen(Qt::red));
    // painter->drawPoint(rect.y(), rect.x()+3*rect.width()/4);
    // painter->drawPoint(rect.y(), rect.x()+rect.width()/4);
    painter->drawText(boundingRect(), "and 2");
}


AGraphicsItem* AndGraphicsItem::clone()
{
    return new AndGraphicsItem();
}

//////////////////////////////////////////////////////////////////////////////////////////////////
///Or Graphic Ithem
/////////////////////////////////////////////////////////////////////////////////////////////////
OrGraphicsItem::OrGraphicsItem(QGraphicsItem *parent)
: AGraphicsItem(parent)
{
    
}

void OrGraphicsItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    // This should be customized for your specific item
    //painter->drawRect(boundingRect());
    painter->drawImage(boundingRect(), QImage("/home/vts/repos/LogicSintesApp/Resources/LogicGates/or.png"));
    painter->setPen(QPen(Qt::blue));
    painter->drawText(boundingRect(), "or 2");
}

AGraphicsItem* OrGraphicsItem::clone()
{
    return new OrGraphicsItem();
}

//////////////////////////////////////////////////////////////////////////////////////////////////
///Nand Graphic Ithem
/////////////////////////////////////////////////////////////////////////////////////////////////
NandGraphicsItem::NandGraphicsItem(QGraphicsItem *parent)
: AGraphicsItem(parent)
{
    
}

void NandGraphicsItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    // This should be customized for your specific item
    //painter->drawRect(boundingRect());
    painter->drawImage(boundingRect(), QImage("/home/vts/repos/LogicSintesApp/Resources/LogicGates/nand.png"));
    painter->setPen(QPen(Qt::blue));
    painter->drawText(boundingRect(), "nand 2");
}

AGraphicsItem* NandGraphicsItem::clone()
{    
    return new NandGraphicsItem();
}

//////////////////////////////////////////////////////////////////////////////////////////////////
///Nor Graphic Ithem
/////////////////////////////////////////////////////////////////////////////////////////////////
NorGraphicsItem::NorGraphicsItem(QGraphicsItem *parent)
: AGraphicsItem(parent)
{    
}

void NorGraphicsItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    // This should be customized for your specific item
    //painter->drawRect(boundingRect());
    painter->drawImage(boundingRect(), QImage("/home/vts/repos/LogicSintesApp/Resources/LogicGates/nor.png"));
    painter->setPen(QPen(Qt::blue));
    painter->drawText(boundingRect(), "nor 2");
}

AGraphicsItem* NorGraphicsItem::clone()
{
    return new NorGraphicsItem();
}

//////////////////////////////////////////////////////////////////////////////////////////////////
///Not Graphic Ithem
/////////////////////////////////////////////////////////////////////////////////////////////////
NotGraphicsItem::NotGraphicsItem(QGraphicsItem *parent)
: AGraphicsItem(parent)
{
    
}

void NotGraphicsItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    // This should be customized for your specific item
    //painter->drawRect(boundingRect());
    painter->drawImage(boundingRect(), QImage("/home/vts/repos/LogicSintesApp/Resources/LogicGates/not.png"));
    painter->setPen(QPen(Qt::blue));
    painter->drawText(boundingRect(), "not");
}

AGraphicsItem* NotGraphicsItem::clone()
{
    return new NotGraphicsItem();
}

//////////////////////////////////////////////////////////////////////////////////////////////////
///Xor Graphic Ithem
/////////////////////////////////////////////////////////////////////////////////////////////////
XorGraphicsItem::XorGraphicsItem(QGraphicsItem *parent)
    : AGraphicsItem(parent)
{
    
}

void XorGraphicsItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    // This should be customized for your specific item
    //painter->drawRect(boundingRect());
    painter->drawImage(boundingRect(), QImage("/home/vts/repos/LogicSintesApp/Resources/LogicGates/xor.png"));
    painter->setPen(QPen(Qt::blue));
    painter->drawText(boundingRect(), "xor 2");
}

AGraphicsItem* XorGraphicsItem::clone()
{
    return new XorGraphicsItem();
}


//////////////////////////////////////////////////////////////////////////////////////////////////
///Xnor Graphic Ithem
/////////////////////////////////////////////////////////////////////////////////////////////////
XnorGraphicsItem::XnorGraphicsItem(QGraphicsItem *parent)
    : AGraphicsItem(parent)
{
    
}

void XnorGraphicsItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    // This should be customized for your specific item
    //painter->drawRect(boundingRect());
    painter->drawImage(boundingRect(), QImage("/home/vts/repos/LogicSintesApp/Resources/LogicGates/xnor.png"));
    painter->setPen(QPen(Qt::blue));
    painter->drawText(boundingRect(), "xnor 2");
}

AGraphicsItem* XnorGraphicsItem::clone()
{
    return new XnorGraphicsItem();
}

//////////////////////////////////////////////////////////////////////////////////////////////////
///Input Graphic Ithem
/////////////////////////////////////////////////////////////////////////////////////////////////
InputGraphicIthem::InputGraphicIthem(QGraphicsItem *parent)
    : AGraphicsItem(parent)
{
    
}

void InputGraphicIthem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    // This should be customized for your specific item
    //painter->drawRect(boundingRect());
    painter->drawImage(boundingRect(), QImage("/home/vts/repos/LogicSintesApp/Resources/LogicGates/input.png"));
    painter->setPen(QPen(Qt::blue));
    painter->drawText(boundingRect(), "input");
}

AGraphicsItem* InputGraphicIthem::clone()
{
    return new InputGraphicIthem();
}

//////////////////////////////////////////////////////////////////////////////////////////////////
///Output Graphic Ithem
/////////////////////////////////////////////////////////////////////////////////////////////////
OutputGraphicIthem::OutputGraphicIthem(QGraphicsItem *parent)
    : AGraphicsItem(parent)
{
    
}

void OutputGraphicIthem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    // This should be customized for your specific item
    //painter->drawRect(boundingRect());
    painter->drawImage(boundingRect(), QImage("/home/vts/repos/LogicSintesApp/Resources/LogicGates/output.png"));
    painter->setPen(QPen(Qt::blue));
    painter->drawText(boundingRect(), "output");
}

AGraphicsItem* OutputGraphicIthem::clone()
{
    return new OutputGraphicIthem();
}

}//namespace gui

/////////////////////////////////////////////////////////////////////////////////////////////
    
    
