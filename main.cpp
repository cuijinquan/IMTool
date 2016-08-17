#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication IMTool(argc, argv);
    MainWindow IM_Window;
    IM_Window.show();

    return IMTool.exec();
}
