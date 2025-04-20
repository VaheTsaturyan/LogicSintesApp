#pragma once
#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QFileDialog>
#include <QString>
#include <QDir>


namespace gui
{

    
class SaveJsonFileDialog : public QDialog {
    Q_OBJECT

public:
    explicit SaveJsonFileDialog(QWidget* parent = nullptr);
    ~SaveJsonFileDialog() = default;

signals:
    void jsonFilePathSelected(const QString& fullPath);

private slots:
    void selectFolder();
    void validateInput();
    void emitSelectedPath();

private:
    void setupUI();
    void connectSignals();

    QLabel* folderLabel;
    QLabel* folderPathLabel;
    QLabel* fileNameLabel;
    QLineEdit* fileNameEdit;
    QPushButton* selectFolderButton;
    QPushButton* saveButton;
    QPushButton* cancelButton;
    QString selectedPath;
};


////////////////////////////////////////////////////////////////////////////////////


class JsonFileDialog : public QFileDialog {
    Q_OBJECT

public:
    explicit JsonFileDialog(QWidget* parent = nullptr);

signals:
    void jsonFileSelected(const QString& filePath);
    void folderOpened(const QString& folderName);

private slots:
    void handleFileSelection(const QString& path);
    void handleDirectoryChange(const QString& path);

private:
    void setupDialog();
};
//////////////////////////////////////////////////////////////////////////////////////

class AddProjectFileDialog : public QFileDialog {
    Q_OBJECT

public:
    explicit AddProjectFileDialog(QWidget* parent = nullptr);

signals:
    void jsonFileSelected(const QString& filePath);
    void folderOpened(const QString& folderName);

private slots:
    void handleFileSelection(const QString& path);
    void handleDirectoryChange(const QString& path);

private:
    void setupDialog();
};


} // namespace gui
