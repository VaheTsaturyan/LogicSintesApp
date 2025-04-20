#pragma once
#include <QApplication>
#include <memory>
#include "./Document/document.h"
#include "./GUI/Components/graphicItem.h"

class MyApplication : public QApplication
{
Q_OBJECT
public:
    explicit MyApplication(int &argc, char **argv);

    static MyApplication* instance();

    std::shared_ptr<doc::Document> getDocument();

    bool notify(QObject *receiver, QEvent *event) override;
    const QBrush &backgroundBrush() const;
    
public slots:
    void openJsonFile( const QString& path );
    void saveJsonFile( const QString& path );
    void newDocument(const QString&);
    void addProjectJsonFile( const QString& path );
    void editorControl( const QString& actionName );
    void addGateInDoc( const QString& gateType );
    void lineAndGraphicSchenBridg( const QPointF &sourcePoint, const QPointF &targetPoint );
    void addConnect( gui::AGraphicsItem* ithemC, gui::AGraphicsItem* ithemI );
    
signals:
    void SignaLLineAndGraphicSchenBridg( const QPointF &sourcePoint, const QPointF &targetPoint );
 
private:
    void initBackgroundPattern();
private:
    std::shared_ptr<doc::Document> doc_;
    QBrush m_backgroundBrush;
    
};