#include "../../../inc/GUI/Components/fileDialog.h"
#include <QFileInfo>

#include "../../../inc/application.h"



namespace gui
{
    
/////////////////////////////////////////////////////////////////////////////////
/////"Save" File Dialog implementetion
/////////////////////////////////////////////////////////////////////////////////
SaveJsonFileDialog::SaveJsonFileDialog(QWidget* parent)
    : QDialog(parent)
    , folderLabel(nullptr)
    , folderPathLabel(nullptr)
    , fileNameLabel(nullptr)
    , fileNameEdit(nullptr)
    , selectFolderButton(nullptr)
    , saveButton(nullptr)
    , cancelButton(nullptr)
{
    setWindowTitle("Save");
    setupUI();
    connectSignals();

    QObject::connect(this, &SaveJsonFileDialog::jsonFilePathSelected, MyApplication::instance(), &MyApplication::saveJsonFile);
}
/*
SaveJsonFileDialog::~SaveJsonFileDialog() {
    // Qt will handle deletion of child widgets
}

*/
void SaveJsonFileDialog::setupUI() {
    // Create widgets
    folderLabel = new QLabel("Selected Folder:", this);
    folderPathLabel = new QLabel("No folder selected", this);
    selectFolderButton = new QPushButton("Select Folder", this);
    
    fileNameLabel = new QLabel("File Name:", this);
    fileNameEdit = new QLineEdit(this);
    fileNameEdit->setPlaceholderText("Enter file name (without .json .v)");
    
    saveButton = new QPushButton("Save", this);
    cancelButton = new QPushButton("Cancel", this);
    saveButton->setEnabled(false);

    // Create layouts
    QVBoxLayout* mainLayout = new QVBoxLayout(this);
    QHBoxLayout* folderLayout = new QHBoxLayout();
    QHBoxLayout* buttonLayout = new QHBoxLayout();

    // Add widgets to layouts
    folderLayout->addWidget(folderPathLabel);
    folderLayout->addWidget(selectFolderButton);

    buttonLayout->addWidget(saveButton);
    buttonLayout->addWidget(cancelButton);

    mainLayout->addWidget(folderLabel);
    mainLayout->addLayout(folderLayout);
    mainLayout->addWidget(fileNameLabel);
    mainLayout->addWidget(fileNameEdit);
    mainLayout->addLayout(buttonLayout);

    setLayout(mainLayout);
    resize(400, 150);
}

void SaveJsonFileDialog::connectSignals() {
    connect(selectFolderButton, &QPushButton::clicked, this, &SaveJsonFileDialog::selectFolder);
    connect(saveButton, &QPushButton::clicked, this, &SaveJsonFileDialog::emitSelectedPath);
    connect(cancelButton, &QPushButton::clicked, this, &SaveJsonFileDialog::reject);
    connect(fileNameEdit, &QLineEdit::textChanged, this, &SaveJsonFileDialog::validateInput);
}

void SaveJsonFileDialog::selectFolder() {
    QString folderPath = QFileDialog::getExistingDirectory(
        this,
        "Select Folder",
        QString(),
        QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks
    );

    if (!folderPath.isEmpty()) {
        selectedPath = folderPath;
        folderPathLabel->setText(folderPath);
        validateInput();
    }
}

void SaveJsonFileDialog::validateInput() {
    bool isValid = !selectedPath.isEmpty() && !fileNameEdit->text().isEmpty();
    saveButton->setEnabled(isValid);
}

void SaveJsonFileDialog::emitSelectedPath() {
    QString fullPath = selectedPath + "/" + fileNameEdit->text() + ".json";
    emit jsonFilePathSelected(fullPath);
    accept();
}


/////////////////////////////////////////////////////////////////////////////////
/////"Open file" file dialog impl
/////////////////////////////////////////////////////////////////////////////////
JsonFileDialog::JsonFileDialog(QWidget* parent)
    : QFileDialog(parent)
{
    setupDialog();

    QObject::connect(this, &JsonFileDialog::jsonFileSelected, MyApplication::instance(), &MyApplication::openJsonFile);

}

void JsonFileDialog::setupDialog()
{
    // Set the root directory to "/"
    setDirectory("/");
    
    // Set file mode to select files only
    setFileMode(QFileDialog::ExistingFile);
    
    // Set filter for JSON files
    setNameFilter("JSON files (*.json);;Verilog files (*.v)");
    //setNameFilter("Verilog files (*.v)");
    // Set viewport options
    setViewMode(QFileDialog::Detail);
    
    // Connect signals
    connect(this, &QFileDialog::fileSelected,
            this, &JsonFileDialog::handleFileSelection);
    
    connect(this, &QFileDialog::directoryEntered,
            this, &JsonFileDialog::handleDirectoryChange);
}

void JsonFileDialog::handleFileSelection(const QString& path)
{
    QFileInfo fileInfo(path);
    if (fileInfo.suffix().toLower() == "json") {
        emit jsonFileSelected(path);
    }
}

void JsonFileDialog::handleDirectoryChange(const QString& path)
{
    QFileInfo dirInfo(path);
    emit folderOpened(dirInfo.fileName());
}









/////////////////////////////////////////////////////////////////////////////////
/////"Add project" File Dialog implementetion
/////////////////////////////////////////////////////////////////////////////////
AddProjectFileDialog::AddProjectFileDialog(QWidget* parent)
    : QFileDialog(parent)
{
    setupDialog();
    
    QObject::connect(this, &AddProjectFileDialog::jsonFileSelected, MyApplication::instance(), &MyApplication::addProjectJsonFile);

}

void AddProjectFileDialog::setupDialog()
{
    // Set the root directory to "/"
    setDirectory("/");
    
    // Set file mode to select files only
    setFileMode(QFileDialog::ExistingFile);
    
    // Set filter for JSON files
    setNameFilter("JSON files (*.json);;Verilog files (*.v)");
//    setNameFilter("Verilog files (*.v)");
    
    // Set viewport options
    setViewMode(QFileDialog::Detail);
    
    // Connect signals
    connect(this, &QFileDialog::fileSelected,
            this, &AddProjectFileDialog::handleFileSelection);
    
    connect(this, &QFileDialog::directoryEntered,
            this, &AddProjectFileDialog::handleDirectoryChange);
}

void AddProjectFileDialog::handleFileSelection(const QString& path)
{
    QFileInfo fileInfo(path);
    if (fileInfo.suffix().toLower() == "json") {
        emit jsonFileSelected(path);
    }
}

void AddProjectFileDialog::handleDirectoryChange(const QString& path)
{
    QFileInfo dirInfo(path);
    emit folderOpened(dirInfo.fileName());
}
} // namespace gui
