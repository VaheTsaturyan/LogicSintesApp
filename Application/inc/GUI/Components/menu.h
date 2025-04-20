#pragma once
#include <QMenu>
#include <QAction>

namespace gui
{


class FileMenu : public QMenu
{
    Q_OBJECT

public:
    explicit FileMenu(QWidget *parent = nullptr);
    ~FileMenu();

signals:
    // Signals emitted when actions are triggered
    void newFileRequested();
    void openFileRequested();
    void saveFileRequested();
    void exitRequested();

private:
    void createActions();
    void setupConnections();

    // Menu actions
    QAction *newAction;
    QAction *openAction;
    QAction *saveAction;
    QAction *exitAction;
};




} // namespace gui
