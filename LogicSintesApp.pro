QT += core gui widgets

TARGET = LogicSintesApp
TEMPLATE = app
CONFIG += c++17 debug

# Debug and Release configurations
CONFIG(debug, debug|release) {
    message("Building in Debug mode")
    QMAKE_CXXFLAGS += -g -O0 # Включаем символы отладки, отключаем оптимизацию
    QMAKE_LFLAGS += -g       # Включаем отладочную информацию для линкера
}

CONFIG(release, debug|release) {
    message("Building in Release mode")
    QMAKE_CXXFLAGS += -O2    # Включаем оптимизацию
}

# Define paths for better organization
INCLUDEPATH += Application/inc \
               Application/inc/GUI \
               Application/inc/GUI/Components \
               Application/inc/Dacumemnt \
               Application/inc/Menegment

# Source files
SOURCES += \
    Application/main.cpp \
    Application/src/application.cpp \
    Application/src/GUI/mainWindow.cpp \
    Application/src/GUI/Components/dockWidget.cpp \
    Application/src/GUI/Components/fileDialog.cpp \
    Application/src/GUI/Components/toolBar.cpp \
    Application/src/GUI/Components/menu.cpp \
    Application/src/GUI/Components/circuitdesignview.cpp \
    Application/src/GUI/Components/connectLine.cpp \
    Application/src/GUI/Components/graphicItem.cpp \
    Application/src/GUI/Components/graphicScen.cpp \
    Application/inc/Editor/action.cpp \
    Application/inc/Editor/editor.cpp \
    Application/inc/Sterializers/Sterializer.cpp \
    Application/src/Dacumemnt/document.cpp \
    Application/src/Dacumemnt/gets.cpp 

# Header files
HEADERS += \
    Application/inc/application.h\
    Application/inc/GUI/mainWindow.h \
    Application/inc/GUI/Components/dockWidget.h \
    Application/inc/GUI/Components/fileDialog.h \
    Application/inc/GUI/Components/toolBar.h \
    Application/inc/GUI/Components/menu.h \
    Application/inc/GUI/Components/circuitdesignview.h \
    Application/inc/GUI/Components/connectLine.h \
    Application/inc/GUI/Components/graphicItem.h \
    Application/inc/GUI/Components/graphicScen.h \
    Application/inc/Document/document.h \
    Application/inc/Document/gets.h \
    Application/inc/Editor/action.h \
    Application/inc/Editor/editor.h \
    Application/inc/Sterializers/Sterializer.h

# Resources
RESOURCES += \
    Resources.qrc

# Default rules for deployment
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

# Линковка с Boost JSON (если необходимо)
LIBS += -lboost_json  # Линка с Boost JSON
