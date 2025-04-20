#pragma once 
#include <QDockWidget>
#include <QTreeWidget>
#include <QListWidget>
#include <QLineEdit>

namespace gui
{


class LogicGateItem : public QTreeWidgetItem {
public:
    LogicGateItem(QTreeWidget *parent, const QString &name, const QString &imagePath);
    
    QString name() const;
    QString imagePath() const;

private:
    QString m_name;
    QString m_imagePath;
};

class LogicGatesDockWidget : public QDockWidget {
    Q_OBJECT

public:
    LogicGatesDockWidget(QWidget *parent = nullptr);
    
signals:
    void logicGateSelected(const QString &gateName);
    protected:
    bool eventFilter(QObject *watched, QEvent *event) override;
    
private slots:
    void filterItems(const QString &text);

private:
    void addLogicGate(const QString &name, const QString &imagePath);

    QTreeWidget *m_logicGatesTree;
    //QListWidget *m_projectsList;
    QLineEdit *m_searchEdit;
};
    
} // namespace gui
