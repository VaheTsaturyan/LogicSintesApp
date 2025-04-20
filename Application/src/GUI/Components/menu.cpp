#include "../../../inc/GUI/Components/menu.h"
#include "../../application.h"
#include <QKeySequence>


namespace gui{


FileMenu::FileMenu(QWidget *parent)
    : QMenu(tr("&File"), parent)
{
    createActions();
    setupConnections();
}

FileMenu::~FileMenu()
{
    // QObject will handle deleting child actions
}

void FileMenu::createActions()
{
    // Create New action with Ctrl+N shortcut
    newAction = new QAction(tr("&New"), this);
    newAction->setShortcut(QKeySequence::New); // Ctrl+N
    newAction->setStatusTip(tr("Create a new file"));
    addAction(newAction);

    // Create Open action with Ctrl+O shortcut
    openAction = new QAction(tr("&Open..."), this);
    openAction->setShortcut(QKeySequence::Open); // Ctrl+O
    openAction->setStatusTip(tr("Open an existing file"));
    addAction(openAction);

    // Add separator
    addSeparator();

    // Create Save action with Ctrl+S shortcut
    saveAction = new QAction(tr("&Save"), this);
    saveAction->setShortcut(QKeySequence::Save); // Ctrl+S
    saveAction->setStatusTip(tr("Save the current file"));
    addAction(saveAction);

    // Add separator
    addSeparator();

    // Create Exit action with Alt+F4 shortcut
    exitAction = new QAction(tr("E&xit"), this);
    exitAction->setShortcut(QKeySequence::Quit); // Usually Alt+F4 on Windows
    exitAction->setStatusTip(tr("Exit the application"));
    addAction(exitAction);
}

void FileMenu::setupConnections()
{
    // Connect actions to signals
    //connect(newAction, &QAction::triggered, this, MyApplication::instance(), &MyApplication::newDocument);
    connect(newAction, &QAction::triggered, this, &FileMenu::newFileRequested);
    connect(openAction, &QAction::triggered, this, &FileMenu::openFileRequested);
    connect(saveAction, &QAction::triggered, this, &FileMenu::saveFileRequested);
    connect(exitAction, &QAction::triggered, this, &FileMenu::exitRequested);

}


}//namespace gui