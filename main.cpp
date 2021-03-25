#include "mainwindow.h"
#include "gameover.h"
#include "win.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    gameover g;
    win n;
    w.show();

    QObject::connect(&w, SIGNAL(gameOver()), &g, SLOT(receivegameOver()));
    QObject::connect(&w, SIGNAL(win()), &n, SLOT(receivewin()));

    QObject::connect(&g, SIGNAL(showMainWindow()), &w, SLOT(receiveagain()));
    QObject::connect(&n, SIGNAL(showMainWindow()), &w, SLOT(receiveagain()));

    QObject::connect(&g, SIGNAL(quit()), &a, SLOT(quit()));
    QObject::connect(&n, SIGNAL(quit()), &a, SLOT(quit()));
    return a.exec();
}
