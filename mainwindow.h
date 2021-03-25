#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QTime>
#include <QKeyEvent>
#include <QLabel>
#include "pacman.h"
#include "ghost.h"
#include "ghost_red.h"
#include "ghost_blue.h"
#include "ghost_pink.h"
#include "ghost_yello.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void keyPressEvent(QKeyEvent *event);
    void set_play();
    void eatDot();
    void die();
    bool ifwin();
    QLabel *score, *s;

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QTimer *tmr1, *tmr2, *tmrg;
    int t, n = 3, r = 2, b = 4, p = 3, y = 1, flag1[4], f = 0, flag2[148], flag3[4], p1, p2, p3, C2, C3, C4, C5;
    character *c1; //pacman
    character *c2, *c3, *c4, *c5, *c2_, *c3_, *c4_, *c5_; //ghost : red, blue, pink, yello
    QGraphicsPixmapItem *dot_b[4];
    QGraphicsPixmapItem *dot_s[152];

private slots:
    void move_pacman();
    void move_ghost();
    void change_ghost();
    void receiveagain();

signals:
    void gameOver();
    void win();
};

#endif // MAINWINDOW_H
