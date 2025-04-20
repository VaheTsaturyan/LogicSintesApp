#include "../../../inc/GUI/Components/dockWidget.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QMouseEvent>
#include <QIcon>
#include <QSize>

#include <iostream>

namespace gui
{
    


/////////////////////////////////////////////////////////////////////////////////////////////
/////
/////////////////////////////////////////////////////////////////////////////////////////////
LogicGateItem::LogicGateItem(QTreeWidget *parent, const QString &name, const QString &imagePath)
    : QTreeWidgetItem(parent), m_name(name), m_imagePath(imagePath) {
    setText(0, name);
    setIcon(0, QIcon(imagePath));
}

QString LogicGateItem::name() const { 
    return m_name; 
}

QString LogicGateItem::imagePath() const { 
    return m_imagePath; 
}






/////////////////////////////////////////////////////////////////////////////////////////////
/////
/////////////////////////////////////////////////////////////////////////////////////////////
LogicGatesDockWidget::LogicGatesDockWidget(QWidget *parent) 
    : QDockWidget("Logic Gate Palette", parent) {
    // Set fixed size for the dock widget
    setFixedSize(150, 700);
    
    // Create main widget and layout
    QWidget *mainWidget = new QWidget(this);
    QVBoxLayout *mainLayout = new QVBoxLayout(mainWidget);
    
    // Set the main widget to have a fixed size as well
    mainWidget->setFixedSize(150, 700);

    // Create Logic Gates section
    QLabel *logicGatesLabel = new QLabel("Logic Gates", mainWidget);
    logicGatesLabel->setStyleSheet("font-weight: bold;");
    mainLayout->addWidget(logicGatesLabel);

    m_logicGatesTree = new QTreeWidget(mainWidget);
    m_logicGatesTree->setHeaderHidden(true);
    m_logicGatesTree->setIconSize(QSize(32, 32));
    mainLayout->addWidget(m_logicGatesTree);

    // Add the logic gates
    addLogicGate("INPUT", "/home/vts/repos/LogicSintesApp/Resources/LogicGates/input.png");
    addLogicGate("OUTPUT", "/home/vts/repos/LogicSintesApp/Resources/LogicGates/output.png");
    addLogicGate("AND", "/home/vts/repos/LogicSintesApp/Resources/LogicGates/and.png");
    addLogicGate("OR", "/home/vts/repos/LogicSintesApp/Resources/LogicGates/or.png");
    addLogicGate("NAND", "/home/vts/repos/LogicSintesApp/Resources/LogicGates/nand.png");
    addLogicGate("NOR", "/home/vts/repos/LogicSintesApp/Resources/LogicGates/nor.png");
    addLogicGate("NOT", "/home/vts/repos/LogicSintesApp/Resources/LogicGates/not.png");
    addLogicGate("XOR", "/home/vts/repos/LogicSintesApp/Resources/LogicGates/xor.png");
    addLogicGate("XNOR", "/home/vts/repos/LogicSintesApp/Resources/LogicGates/xnor.png");
    // Create Previous Projects section
    QLabel *projectsLabel = new QLabel("Previous Projects", mainWidget);
    projectsLabel->setStyleSheet("font-weight: bold;");
    mainLayout->addWidget(projectsLabel);

    // m_projectsList = new QListWidget(mainWidget);
    // mainLayout->addWidget(m_projectsList);

    // // Just for demo purposes, add some sample projects
    // m_projectsList->addItem("Project 1");
    // m_projectsList->addItem("Project 2");
    // m_projectsList->addItem("Project 3");

    // Create String (Search) section
    QLabel *searchLabel = new QLabel("Search", mainWidget);
    searchLabel->setStyleSheet("font-weight: bold;");
    mainLayout->addWidget(searchLabel);

    m_searchEdit = new QLineEdit(mainWidget);
    m_searchEdit->setPlaceholderText("Search logic gates or projects...");
    mainLayout->addWidget(m_searchEdit);

    connect(m_searchEdit, &QLineEdit::textChanged, this, &LogicGatesDockWidget::filterItems);

    // Set the main widget
    setWidget(mainWidget);

    // Prevent the dock widget from being resized
    setFeatures(features() & ~QDockWidget::DockWidgetFloatable & ~QDockWidget::DockWidgetClosable);
    
    // Make sure the dock widget doesn't resize when docked
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

    // Install event filter for mouse tracking
    m_logicGatesTree->viewport()->installEventFilter(this);
    m_logicGatesTree->setMouseTracking(true);
}

bool LogicGatesDockWidget::eventFilter(QObject *watched, QEvent *event) {
    if (watched == m_logicGatesTree->viewport()) {
        if (event->type() == QEvent::MouseButtonPress) {
            QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
            if (mouseEvent->button() == Qt::LeftButton) {
                QPoint pos = mouseEvent->pos();
                QTreeWidgetItem *item = m_logicGatesTree->itemAt(pos);
                if (item) {
                    LogicGateItem *gateItem = dynamic_cast<LogicGateItem*>(item);
                    if (gateItem) {
                        emit logicGateSelected(gateItem->name());
                        std::cout<<gateItem->name().toStdString()<<std::endl;
                    }
                }
            }
        }
    }
    return QDockWidget::eventFilter(watched, event);
}

void LogicGatesDockWidget::filterItems(const QString &text) {
    // Filter logic gates
    for (int i = 0; i < m_logicGatesTree->topLevelItemCount(); ++i) {
        QTreeWidgetItem *item = m_logicGatesTree->topLevelItem(i);
        item->setHidden(!item->text(0).contains(text, Qt::CaseInsensitive));
    }

    // Filter projects
    // for (int i = 0; i < m_projectsList->count(); ++i) {
    //     QListWidgetItem *item = m_projectsList->item(i);
    //     item->setHidden(!item->text().contains(text, Qt::CaseInsensitive));
    // }
}

void LogicGatesDockWidget::addLogicGate(const QString &name, const QString &imagePath) {
    LogicGateItem *item = new LogicGateItem(m_logicGatesTree, name, imagePath);
    m_logicGatesTree->addTopLevelItem(item);
}




} // namespace gui