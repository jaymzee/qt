#include <QtWidgets/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow mainWindow;

    //mainWindow.showMaximized();
    mainWindow.resize(400, 250);
    mainWindow.show();

    return app.exec();
}
