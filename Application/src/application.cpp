#include "../inc/application.h"
#include <QPalette>
#include <QStyleFactory>
#include <QGraphicsView>


#include <iostream>
#include "application.h"
#include "../inc/Editor/editor.h"

MyApplication::MyApplication(int &argc, char **argv) : QApplication(argc, argv)
{
    doc_ = std::make_shared<doc::Document>();
    initBackgroundPattern(); // initialize pattern on start
    this->setStyle(QStyleFactory::create("Fusion"));
    this->setStyleSheet(R"(
        QGraphicsView {
            background-color:rgb(15, 6, 36);
            border: 1px solid #444;
        }
    )");
    
}

MyApplication *MyApplication::instance()
{
    return static_cast<MyApplication*>(QApplication::instance());
}

std::shared_ptr<doc::Document> MyApplication::getDocument()
{
    return doc_;
}

void MyApplication::saveJsonFile(const QString &path)
{
    std::cout<<path.toStdString()<<std::endl;
}

void MyApplication::newDocument(const QString& mesig)
{
    std::cout<<"new action mesig := "<<mesig.toStdString()<<std::endl;    
    doc_ = std::make_shared<doc::Document>();
}

void MyApplication::addProjectJsonFile(const QString &path)
{
    std::cout<<path.toStdString()<<std::endl;
}

void MyApplication::editorControl(const QString &actionName)
{
    edt::Editor& editor = edt::Editor::getEditor();
    if( actionName.toStdString() == "redo" ){
        editor.redo();
        return;
    }
    editor.undo();
}

void MyApplication::addGateInDoc(const QString &gateType)
{
    edt::Editor &edtInstance = edt::Editor::getEditor();
    std::shared_ptr<doc::Gate> gatePtr = std::make_shared<doc::Gate>();
    gatePtr->setType(gateType.toStdString());
    std::shared_ptr<edt::AddGate> addGateAction= std::make_shared<edt::AddGate>(doc_, gatePtr);
    edtInstance.proces(addGateAction);
    std::cout<<"gate for add in doc := "<<gateType.toStdString()<<std::endl;
    std::cout<<"dock size := "<<doc_->getGateCaunt()<<std::endl;
}

void MyApplication::lineAndGraphicSchenBridg(const QPointF &sourcePoint, const QPointF &targetPoint)
{
    emit SignaLLineAndGraphicSchenBridg( sourcePoint, targetPoint );
}

void MyApplication::addConnect( gui::AGraphicsItem *ithemC, gui::AGraphicsItem *ithemI)
{
    std::cout<<"addConnect\n";

}

void MyApplication::openJsonFile(const QString &path)
{
    std::cout<<path.toStdString()<<std::endl;
}


void MyApplication::initBackgroundPattern() {
    QPixmap dotPattern(50, 50);
    dotPattern.fill(Qt::transparent);

    QPainter painter(&dotPattern);
    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::red);
    painter.drawEllipse(23, 23, 4, 4);  // Centered red dot
    painter.end();

    m_backgroundBrush = QBrush(dotPattern);
}

const QBrush &MyApplication::backgroundBrush() const {
    return m_backgroundBrush;
}

bool MyApplication::notify(QObject *receiver, QEvent *event) {
    if (event->type() == QEvent::Show) {
        if (auto view = qobject_cast<QGraphicsView*>(receiver)) {
            view->setBackgroundBrush(m_backgroundBrush);
        }
    }
    return QApplication::notify(receiver, event);
}
