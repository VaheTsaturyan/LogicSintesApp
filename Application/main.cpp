#include "./inc/GUI/mainWindow.h"
#include "./inc/application.h"

int main(int argc, char *argv[]){
    MyApplication *app = new MyApplication(argc, argv);
    gui::MainWindow *win = new gui::MainWindow();
    win->show();
    return app->exec();


}