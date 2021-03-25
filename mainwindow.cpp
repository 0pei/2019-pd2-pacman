#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QGraphicsScene *scene = new QGraphicsScene(
                0, 0,
                ui->graphicsView->width() - 2,
                ui->graphicsView->height() - 2);
    scene->addPixmap(QPixmap(":/pic/map.png"));

    t = scene->startTimer(5000);
    tmr1 = new QTimer();
    tmr2 = new QTimer();
    tmrg = new QTimer();
    tmr1->setInterval(15);
    tmr2->setInterval(15);
    tmrg->setInterval(5000);
    tmr1->start();
    tmr2->start();
    connect(tmr1, SIGNAL(timeout()), this, SLOT(move_pacman()));
    connect(tmr2, SIGNAL(timeout()), this, SLOT(move_ghost()));
    connect(tmrg, SIGNAL(timeout()), this, SLOT(change_ghost()));

    for(int i = 0; i < 4; ++i) {
        dot_b[i] = new QGraphicsPixmapItem(QPixmap(":/dot/big_dot.png"));
    }
    dot_b[0]->setPos(16, 88);
    dot_b[1]->setPos(418, 88);
    dot_b[2]->setPos(16, 418);
    dot_b[3]->setPos(418, 418);
    for(int i = 0; i < 152; ++i) {
        dot_s[i] = new QGraphicsPixmapItem(QPixmap(":/dot/small_dot.png"));
    }
    dot_s[148]->setPos(20, 70);
    dot_s[0]->setPos(20, 115);
    dot_s[1]->setPos(20, 134);
    dot_s[2]->setPos(20, 159);
    dot_s[3]->setPos(20, 183);
    dot_s[4]->setPos(20, 375);
    dot_s[5]->setPos(20, 399);
    dot_s[6]->setPos(20, 472);
    dot_s[7]->setPos(20, 496);
    dot_s[149]->setPos(20, 520);
    dot_s[8]->setPos(47, 70);
    dot_s[9]->setPos(47, 134);
    dot_s[10]->setPos(47, 183);
    dot_s[11]->setPos(47, 375);
    dot_s[12]->setPos(47, 424);
    dot_s[13]->setPos(47, 448);
    dot_s[14]->setPos(47, 472);
    dot_s[15]->setPos(47, 520);
    dot_s[16]->setPos(73, 70);
    dot_s[17]->setPos(73, 134);
    dot_s[18]->setPos(73, 183);
    dot_s[19]->setPos(73, 375);
    dot_s[20]->setPos(73, 472);
    dot_s[21]->setPos(73, 520);
    dot_s[22]->setPos(101, 70);
    dot_s[23]->setPos(101, 92);
    dot_s[24]->setPos(101, 115);
    dot_s[25]->setPos(101, 134);
    dot_s[26]->setPos(101, 159);
    dot_s[27]->setPos(101, 183);
    dot_s[28]->setPos(101, 207);
    dot_s[29]->setPos(101, 231);
    dot_s[30]->setPos(101, 255);
    dot_s[31]->setPos(101, 279);
    dot_s[32]->setPos(101, 303);
    dot_s[33]->setPos(101, 327);
    dot_s[34]->setPos(101, 353);
    dot_s[35]->setPos(101, 375);
    dot_s[36]->setPos(101, 399);
    dot_s[37]->setPos(101, 424);
    dot_s[38]->setPos(101, 448);
    dot_s[39]->setPos(101, 472);
    dot_s[40]->setPos(101, 520);
    dot_s[41]->setPos(125, 70);
    dot_s[42]->setPos(125, 134);
    dot_s[43]->setPos(125, 375);
    dot_s[44]->setPos(125, 424);
    dot_s[45]->setPos(125, 520);
    dot_s[46]->setPos(149, 70);
    dot_s[47]->setPos(149, 134);
    dot_s[48]->setPos(149, 159);
    dot_s[49]->setPos(149, 183);
    dot_s[50]->setPos(149, 375);
    dot_s[51]->setPos(149, 424);
    dot_s[52]->setPos(149, 448);
    dot_s[53]->setPos(149, 472);
    dot_s[54]->setPos(149, 520);
    dot_s[55]->setPos(173, 70);
    dot_s[56]->setPos(173, 134);
    dot_s[57]->setPos(173, 183);
    dot_s[58]->setPos(173, 375);
    dot_s[59]->setPos(173, 424);
    dot_s[60]->setPos(173, 472);
    dot_s[61]->setPos(173, 520);
    dot_s[62]->setPos(197, 70);
    dot_s[63]->setPos(197, 92);
    dot_s[64]->setPos(197, 115);
    dot_s[65]->setPos(197, 134);
    dot_s[66]->setPos(197, 183);
    dot_s[67]->setPos(197, 375);
    dot_s[68]->setPos(197, 399);
    dot_s[69]->setPos(197, 424);
    dot_s[70]->setPos(197, 472);
    dot_s[71]->setPos(197, 496);
    dot_s[72]->setPos(197, 520);
    dot_s[73]->setPos(221, 134);
    dot_s[74]->setPos(221, 520);
    dot_s[75]->setPos(245, 70);
    dot_s[76]->setPos(245, 92);
    dot_s[77]->setPos(245, 115);
    dot_s[78]->setPos(245, 134);
    dot_s[79]->setPos(245, 183);
    dot_s[80]->setPos(245, 375);
    dot_s[81]->setPos(245, 399);
    dot_s[82]->setPos(245, 424);
    dot_s[83]->setPos(245, 472);
    dot_s[84]->setPos(245, 496);
    dot_s[85]->setPos(245, 520);
    dot_s[86]->setPos(269, 70);
    dot_s[87]->setPos(269, 134);
    dot_s[88]->setPos(269, 183);
    dot_s[89]->setPos(269, 375);
    dot_s[90]->setPos(269, 424);
    dot_s[91]->setPos(269, 472);
    dot_s[92]->setPos(269, 520);
    dot_s[93]->setPos(293, 70);
    dot_s[94]->setPos(293, 134);
    dot_s[95]->setPos(293, 159);
    dot_s[96]->setPos(293, 183);
    dot_s[97]->setPos(293, 375);
    dot_s[98]->setPos(293, 424);
    dot_s[99]->setPos(293, 448);
    dot_s[100]->setPos(293, 472);
    dot_s[101]->setPos(293, 520);
    dot_s[102]->setPos(317, 70);
    dot_s[103]->setPos(317, 134);
    dot_s[104]->setPos(317, 375);
    dot_s[105]->setPos(317, 424);
    dot_s[106]->setPos(317, 520);
    dot_s[107]->setPos(341, 70);
    dot_s[108]->setPos(341, 92);
    dot_s[109]->setPos(341, 115);
    dot_s[110]->setPos(341, 134);
    dot_s[111]->setPos(341, 159);
    dot_s[112]->setPos(341, 183);
    dot_s[113]->setPos(341, 207);
    dot_s[114]->setPos(341, 231);
    dot_s[115]->setPos(341, 255);
    dot_s[116]->setPos(341, 279);
    dot_s[117]->setPos(341, 303);
    dot_s[118]->setPos(341, 327);
    dot_s[119]->setPos(341, 353);
    dot_s[120]->setPos(341, 375);
    dot_s[121]->setPos(341, 399);
    dot_s[122]->setPos(341, 424);
    dot_s[123]->setPos(341, 448);
    dot_s[124]->setPos(341, 472);
    dot_s[125]->setPos(341, 520);
    dot_s[126]->setPos(367, 70);
    dot_s[127]->setPos(367, 134);
    dot_s[128]->setPos(367, 183);
    dot_s[129]->setPos(367, 375);
    dot_s[130]->setPos(367, 472);
    dot_s[131]->setPos(367, 520);
    dot_s[132]->setPos(393, 70);
    dot_s[133]->setPos(393, 134);
    dot_s[134]->setPos(393, 183);
    dot_s[135]->setPos(393, 375);
    dot_s[136]->setPos(393, 424);
    dot_s[137]->setPos(393, 448);
    dot_s[138]->setPos(393, 472);
    dot_s[139]->setPos(393, 520);
    dot_s[150]->setPos(422, 70);
    dot_s[140]->setPos(422, 115);
    dot_s[141]->setPos(422, 134);
    dot_s[142]->setPos(422, 159);
    dot_s[143]->setPos(422, 183);
    dot_s[144]->setPos(422, 375);
    dot_s[145]->setPos(422, 399);
    dot_s[146]->setPos(422, 472);
    dot_s[147]->setPos(422, 496);
    dot_s[151]->setPos(422, 520);
    for(int i = 0; i < 4; ++i) {
        scene->addItem(dot_b[i]);
    }
    for(int i = 0; i < 152; ++i) {
        scene->addItem(dot_s[i]);
    }

    c1 = new pacman(215, 418);
    c2 = new ghost_red(14, 64);
    c3 = new ghost_blue(14, 514);
    c4 = new ghost_pink(416, 64);
    c5 = new ghost_yello(416, 514);
    c2_ = new ghost(14, 64);
    c3_ = new ghost(14, 514);
    c4_ = new ghost(416, 64);
    c5_ = new ghost(416, 514);
    scene->addItem(c1->c);
    scene->addItem(c2_->c);
    scene->addItem(c3_->c);
    scene->addItem(c4_->c);
    scene->addItem(c5_->c);
    scene->addItem(c2->c);
    scene->addItem(c3->c);
    scene->addItem(c4->c);
    scene->addItem(c5->c);

    score = new QLabel(this);
    score->setText("SCORE:");
    score->setStyleSheet("color:white");
    score->setGeometry(20, 0, 50, 50);

    s = new QLabel(this);
    s->setNum(0);
    s->setStyleSheet("color:white");
    s->setGeometry(80, 0, 50, 50);

    qsrand(QTime(0, 0, 0).secsTo(QTime::currentTime()));

    ui->graphicsView->setScene(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
        case Qt::Key_W:
            if(c1->canMove(c1->c->x(), c1->c->y() - 1) == true || c1->canTurn(c1->c->x(), c1->c->y()) == true || n == 2) {
                n = 1;
            }
            break;

        case Qt::Key_S:
            if(c1->canMove(c1->c->x(), c1->c->y() + 1) == true || c1->canTurn(c1->c->x(), c1->c->y()) == true || n == 1) {
                n = 2;
            }
            break;

        case Qt::Key_A:
            if(c1->canMove(c1->c->x() - 1, c1->c->y()) == true || c1->canTurn(c1->c->x(), c1->c->y()) == true || n == 4) {
                n = 3;
            }
            break;

        case Qt::Key_D:
            if(c1->canMove(c1->c->x() + 1, c1->c->y()) == true || c1->canTurn(c1->c->x(), c1->c->y()) == true || n == 3) {
                n = 4;
            }
            break;
    }
    c1->repair();
}

void MainWindow::set_play()
{
    c1->c->setPos(215, 418);
    c2->c->setPos(14, 64);
    c3->c->setPos(14, 514);
    c4->c->setPos(416, 64);
    c5->c->setPos(416, 514);
    n = 3;
    for (int i = 0; i < 4; ++i) {
        dot_b[i]->show();
    }
    for (int i = 0; i < 152; ++i) {
        dot_s[i]->show();
    }
    for(int i = 0; i < 4; ++i) {
        flag1[i] = 0;
    }
    for(int i = 0; i < 152; ++i) {
        flag2[i] = 0;
    }
    for(int i = 0; i < 4; ++i) {
        flag3[i] = 0;
    }
    s->setNum(0);
}

void MainWindow::eatDot()
{
    for(int i = 0; i < 4; ++i) {
        if(c1->c->collidesWithItem(dot_b[i]) == true) {
            if(flag1[i] != 1) {
                dot_b[i]->hide();
                flag1[i] = 1;
                f = 1;
                C2 = C3 = C4 = C5 = 0;
                tmrg->start();
            }
        }
    }
    for(int i = 0; i < 152; ++i) {
        if(c1->c->collidesWithItem(dot_s[i]) == true) {
            dot_s[i]->hide();
            flag2[i] = 1;
        }
    }
    if(ifwin() == true) {
        emit win();
    }

    if(f == 1 && c1->c->collidesWithItem(c2_->c) == true) {
        c2_->c->hide();
        c2->c->setPos(215, 225);
        c2->c->show();
        flag3[0] = 1;
        C2 = 1;
    }
    if(f == 1 && c1->c->collidesWithItem(c3_->c) == true) {
        c3_->c->hide();
        c3->c->setPos(215, 225);
        c3->c->show();
        flag3[1] = 1;
        C3 = 1;
    }
    if(f == 1 && c1->c->collidesWithItem(c4_->c) == true) {
        c4_->c->hide();
        c4->c->setPos(215, 225);
        c4->c->show();
        flag3[2] = 1;
        C4 = 1;
    }
    if(f == 1 && c1->c->collidesWithItem(c5_->c) == true) {
        c5_->c->hide();
        c5->c->setPos(215, 225);
        c5->c->show();
        flag3[3] = 1;
        C5 = 1;
    }
}

void MainWindow::die()
{
    if(f == 0 && (c1->c->collidesWithItem(c2->c) == true || c1->c->collidesWithItem(c3->c) == true
    || c1->c->collidesWithItem(c4->c) == true || c1->c->collidesWithItem(c5->c) == true)) {
        emit gameOver();
        this->hide();
    }
}

bool MainWindow::ifwin()
{
    for (int i = 0; i < 4; ++i) {
        if(flag1[i] == 0) {
            return false;
        }
    }
    for (int i = 0; i < 152; ++i) {
        if(flag2[i] == 0) {
            return false;
        }
    }
    return true;
}

void MainWindow::move_pacman()
{
    if(n == 1 && c1->canMove(c1->c->x(), c1->c->y() - 1) == true) {
        c1->move(n);
    }
    else if(n == 2 && c1->canMove(c1->c->x(), c1->c->y() + 1) == true) {
        c1->move(n);
    }
    else if(n == 3 && c1->canMove(c1->c->x() - 1, c1->c->y()) == true) {
        c1->move(n);
        if(c1->c->x() == 0.0 && c1->c->y() == c1->y5) {
            c1->c->setPos(440, c1->y5);
        }
    }
    else if(n == 4 && c1->canMove(c1->c->x() + 1, c1->c->y()) == true) {
        c1->move(n);
        if(c1->c->x() == 440.0 && c1->c->y() == c1->y5) {
            c1->c->setPos(0, c1->y5);
        }
    }
    eatDot();
    die();
    p1 = 0;
    p2 = 0;
    p3 = 0;
    for(int i = 0; i < 4; ++i) {
        if(flag1[i] == 1) {
            p1++;
        }
    }
    for(int i = 0; i < 152; ++i) {
        if(flag2[i] == 1) {
            p2++;
        }
    }
    for(int i = 0; i < 4; ++i) {
        if(flag3[i] == 1) {
            p3++;
        }
    }
    s->setNum(p1 * 200 + p2 * 100 + p3 * 500);
}

void MainWindow::move_ghost()
{   //red
    if(r == 1 && c2->canMove(c2->c->x(), c2->c->y() - 1) == true) {
        c2->move(r);
    }
    else if(r == 2 && c2->canMove(c2->c->x(), c2->c->y() + 1) == true) {
        c2->move(r);
    }
    else if(r == 3 && c2->canMove(c2->c->x() - 1, c2->c->y()) == true) {
        c2->move(r);
        if(c2->c->x() == 0.0 && c2->c->y() == c2->y5) {
            c2->c->setPos(440, c2->y5);
        }
    }
    else if(r == 4 && c2->canMove(c2->c->x() + 1, c2->c->y()) == true) {
        c2->move(r);
        if(c2->c->x() == 440.0 && c2->c->y() == c2->y5) {
            c2->c->setPos(0, c2->y5);
        }
    }
    //red turn
    if (r == 1 && c2->canMove(c2->c->x(), c2->c->y() - 1) == false) {
        if (c2->canMove(c2->c->x() - 1, c2->c->y()) == true && c2->canMove(c2->c->x() + 1, c2->c->y()) == false) {
            r = 3;
        }
        else if (c2->canMove(c2->c->x() - 1, c2->c->y()) == false && c2->canMove(c2->c->x() + 1, c2->c->y()) == true) {
            r = 4;
        }
        else if (c2->canMove(c2->c->x() - 1, c2->c->y()) == true && c2->canMove(c2->c->x() + 1, c2->c->y()) == true) {
            r = 3;
        }
    }
    else if (r == 2 && c2->canMove(c2->c->x(), c2->c->y() + 1) == false) {
        if (c2->canMove(c2->c->x() - 1, c2->c->y()) == true && c2->canMove(c2->c->x() + 1, c2->c->y()) == false) {
            r = 3;
        }
        else if (c2->canMove(c2->c->x() - 1, c2->c->y()) == false && c2->canMove(c2->c->x() + 1, c2->c->y()) == true) {
            r = 4;
        }
        else if (c2->canMove(c2->c->x() - 1, c2->c->y()) == true && c2->canMove(c2->c->x() + 1, c2->c->y()) == true) {
            r = 3;
        }
    }
    else if (r == 2 && c2->canMove(c2->c->x(), c2->c->y() + 1) == true && c2->canMove(c2->c->x() + 1, c2->c->y()) == true) {
        r = 4;
    }
    else if (r == 3 && c2->canMove(c2->c->x() - 1, c2->c->y()) == false) {
        if (c2->canMove(c2->c->x(), c2->c->y() - 1) == true && c2->canMove(c2->c->x(), c2->c->y() + 1) == false) {
            r = 1;
        }
        else if (c2->canMove(c2->c->x(), c2->c->y() - 1) == false && c2->canMove(c2->c->x(), c2->c->y() + 1) == true) {
            r = 2;
        }
        else if (c2->canMove(c2->c->x(), c2->c->y() - 1) == true && c2->canMove(c2->c->x(), c2->c->y() + 1) == true) {
            r = 2;
        }
    }
    else if (r == 3 && c2->canMove(c2->c->x() - 1, c2->c->y()) == false && c2->canMove(c2->c->x(), c2->c->y() + 1) == true) {
        r = 2;
    }
    else if (r == 4 && c2->canMove(c2->c->x() + 1, c2->c->y()) == false) {
        if (c2->canMove(c2->c->x(), c2->c->y() - 1) == true && c2->canMove(c2->c->x(), c2->c->y() + 1) == false) {
            r = 1;
        }
        else if (c2->canMove(c2->c->x(), c2->c->y() - 1) == false && c2->canMove(c2->c->x(), c2->c->y() + 1) == true) {
            r = 2;
        }
        else if (c2->canMove(c2->c->x(), c2->c->y() - 1) == true && c2->canMove(c2->c->x(), c2->c->y() + 1) == true) {
            r = 2;
        }
    }
    //red chase
    if(c2->c->x() == c1->c->x()) {
        if(c2->c->y() > c1->c->y() && c2->canMove(c2->c->x(), c2->c->y() - 1) == true) {
            r = 1;
        }
        else if (c2->c->y() < c1->c->y() && c2->canMove(c2->c->x(), c2->c->y() + 1) == true) {
            r = 2;
        }
    }
    else if (c2->c->y() == c1->c->y()) {
        if(c2->c->x() > c1->c->x() && c2->canMove(c2->c->x() - 1, c2->c->y()) == true) {
            r = 3;
        }
        else if (c2->c->x() < c1->c->x() && c2->canMove(c2->c->x() + 1, c2->c->y()) == true) {
            r = 4;
        }
    }
    //blue
    if(b == 1 && c3->canMove(c3->c->x(), c3->c->y() - 1) == true) {
        c3->move(b);
    }
    else if(b == 2 && c3->canMove(c3->c->x(), c3->c->y() + 1) == true) {
        c3->move(b);
    }
    else if(b == 3 && c3->canMove(c3->c->x() - 1, c3->c->y()) == true) {
        c3->move(b);
        if(c3->c->x() == 0.0 && c3->c->y() == c3->y5) {
            c3->c->setPos(440, c3->y5);
        }
    }
    else if(b == 4 && c3->canMove(c3->c->x() + 1, c3->c->y()) == true) {
        c3->move(b);
        if(c3->c->x() == 440.0 && c3->c->y() == c3->y5) {
            c3->c->setPos(0, c3->y5);
        }
    }
    //blue turn
    if (b == 1 && c3->canMove(c3->c->x(), c3->c->y() - 1) == false) {
        if (c3->canMove(c3->c->x() - 1, c3->c->y()) == true && c3->canMove(c3->c->x() + 1, c3->c->y()) == false) {
            b = 3;
        }
        else if (c3->canMove(c3->c->x() - 1, c3->c->y()) == false && c3->canMove(c3->c->x() + 1, c3->c->y()) == true) {
            b = 4;
        }
        else if (c3->canMove(c3->c->x() - 1, c3->c->y()) == true && c3->canMove(c3->c->x() + 1, c3->c->y()) == true) {
            b = 3;
        }
    }
    else if (b == 1 && c3->canMove(c3->c->x(), c3->c->y() - 1) == true && c3->canMove(c3->c->x() - 1, c3->c->y()) == true) {
        b = 3;
    }
    else if (b == 2 && c3->canMove(c3->c->x(), c3->c->y() + 1) == false) {
        if (c3->canMove(c3->c->x() - 1, c3->c->y()) == true && c3->canMove(c3->c->x() + 1, c3->c->y()) == false) {
            b = 3;
        }
        else if (c3->canMove(c3->c->x() - 1, c3->c->y()) == false && c3->canMove(c3->c->x() + 1, c3->c->y()) == true) {
            b = 4;
        }
        else if (c3->canMove(c3->c->x() - 1, c3->c->y()) == true && c3->canMove(c3->c->x() + 1, c3->c->y()) == true) {
            b = 3;
        }
    }
    else if (b == 2 && c3->canMove(c3->c->x(), c3->c->y() + 1) == true && c3->canMove(c3->c->x() - 1, c3->c->y()) == true) {
        b = 3;
    }
    else if (b == 3 && c3->canMove(c3->c->x() - 1, c3->c->y()) == false) {
        if (c3->canMove(c3->c->x(), c3->c->y() - 1) == true && c3->canMove(c3->c->x(), c3->c->y() + 1) == false) {
            b = 1;
        }
        else if (c3->canMove(c3->c->x(), c3->c->y() - 1) == false && c3->canMove(c3->c->x(), c3->c->y() + 1) == true) {
            b = 2;
        }
        else if (c3->canMove(c3->c->x(), c3->c->y() - 1) == true && c3->canMove(c3->c->x(), c3->c->y() + 1) == true) {
            b = 2;
        }
    }
    else if (b == 4 && c3->canMove(c3->c->x() + 1, c3->c->y()) == false) {
        if (c3->canMove(c3->c->x(), c3->c->y() - 1) == true && c3->canMove(c3->c->x(), c3->c->y() + 1) == false) {
            b = 1;
        }
        else if (c3->canMove(c3->c->x(), c3->c->y() - 1) == false && c3->canMove(c3->c->x(), c3->c->y() + 1) == true) {
            b = 2;
        }
        else if (c3->canMove(c3->c->x(), c3->c->y() - 1) == true && c3->canMove(c3->c->x(), c3->c->y() + 1) == true) {
            b = 2;
        }
    }
    else if (b == 4 && c3->canMove(c3->c->x() + 1, c3->c->y()) == true && c3->canMove(c3->c->x(), c3->c->y() + 1) == true) {
        b = 2;
    }
    //blue chase
    if(c3->c->x() == c1->c->x()) {
        if(c3->c->y() > c1->c->y() && c3->canMove(c3->c->x(), c3->c->y() - 1) == true) {
            b = 1;
        }
        else if (c3->c->y() < c1->c->y() && c3->canMove(c3->c->x(), c3->c->y() + 1) == true) {
            b = 2;
        }
    }
    else if (c3->c->y() == c1->c->y()) {
        if(c3->c->x() > c1->c->x() && c3->canMove(c3->c->x() - 1, c3->c->y()) == true) {
            b = 3;
        }
        else if (c3->c->x() < c1->c->x() && c3->canMove(c3->c->x() + 1, c3->c->y()) == true) {
            b = 4;
        }
    }
    //pink
    if(p == 1 && c4->canMove(c4->c->x(), c4->c->y() - 1) == true) {
        c4->move(p);
    }
    else if(p == 2 && c4->canMove(c4->c->x(), c4->c->y() + 1) == true) {
        c4->move(p);
    }
    else if(p == 3 && c4->canMove(c4->c->x() - 1, c4->c->y()) == true) {
        c4->move(p);
        if(c4->c->x() == 0.0 && c4->c->y() == c4->y5) {
            c4->c->setPos(440, c4->y5);
        }
    }
    else if(p == 4 && c4->canMove(c4->c->x() + 1, c4->c->y()) == true) {
        c4->move(p);
        if(c4->c->x() == 440.0 && c4->c->y() == c4->y5) {
            c4->c->setPos(0, c4->y5);
        }
    }
    //pink turn
    if (p == 1 && c4->canMove(c4->c->x(), c4->c->y() - 1) == false) {
        if (c4->canMove(c4->c->x() - 1, c4->c->y()) == true && c4->canMove(c4->c->x() + 1, c4->c->y()) == false) {
            p = 3;
        }
        else if (c4->canMove(c4->c->x() - 1, c4->c->y()) == false && c4->canMove(c4->c->x() + 1, c4->c->y()) == true) {
            p = 4;
        }
        else if (c4->canMove(c4->c->x() - 1, c4->c->y()) == true && c4->canMove(c4->c->x() + 1, c4->c->y()) == true) {
            p = 4;
        }
    }
    else if (p == 2 && c4->canMove(c4->c->x(), c4->c->y() + 1) == false) {
        if (c4->canMove(c4->c->x() - 1, c4->c->y()) == true && c4->canMove(c4->c->x() + 1, c4->c->y()) == false) {
            p = 3;
        }
        else if (c4->canMove(c4->c->x() - 1, c4->c->y()) == false && c4->canMove(c4->c->x() + 1, c4->c->y()) == true) {
            p = 4;
        }
        else if (c4->canMove(c4->c->x() - 1, c4->c->y()) == true && c4->canMove(c4->c->x() + 1, c4->c->y()) == true) {
            p = 3;
        }
    }
    else if (p == 3 && c4->canMove(c4->c->x() - 1, c4->c->y()) == false) {
        if (c4->canMove(c4->c->x(), c4->c->y() - 1) == true && c4->canMove(c4->c->x(), c4->c->y() + 1) == false) {
            p = 1;
        }
        else if (c4->canMove(c4->c->x(), c4->c->y() - 1) == false && c4->canMove(c4->c->x(), c4->c->y() + 1) == true) {
            p = 2;
        }
        else if (c4->canMove(c4->c->x(), c4->c->y() - 1) == true && c4->canMove(c4->c->x(), c4->c->y() + 1) == true) {
            p = 2;
        }
    }
    else if (p == 3 && c4->canMove(c4->c->x() - 1, c4->c->y()) == true && c4->canMove(c4->c->x(), c4->c->y() + 1) == true) {
        p = 2;
    }
    else if (p == 4 && c4->canMove(c4->c->x() + 1, c4->c->y()) == false) {
        if (c4->canMove(c4->c->x(), c4->c->y() - 1) == true && c4->canMove(c4->c->x(), c4->c->y() + 1) == false) {
            p = 1;
        }
        else if (c4->canMove(c4->c->x(), c4->c->y() - 1) == false && c4->canMove(c4->c->x(), c4->c->y() + 1) == true) {
            p = 2;
        }
        else if (c4->canMove(c4->c->x(), c4->c->y() - 1) == true && c4->canMove(c4->c->x(), c4->c->y() + 1) == true) {
            p = 2;
        }
    }
    //pink chase
    if(c4->c->x() == c1->c->x()) {
        if(c4->c->y() > c1->c->y() && c4->canMove(c4->c->x(), c4->c->y() - 1) == true) {
            p = 1;
        }
        else if (c4->c->y() < c1->c->y() && c4->canMove(c4->c->x(), c4->c->y() + 1) == true) {
            p = 2;
        }
    }
    else if (c4->c->y() == c1->c->y()) {
        if(c4->c->x() > c1->c->x() && c4->canMove(c4->c->x() - 1, c4->c->y()) == true) {
            p = 3;
        }
        else if (c4->c->x() < c1->c->x() && c4->canMove(c4->c->x() + 1, c4->c->y()) == true) {
            p = 4;
        }
    }
    //yello
    if(y == 1 && c5->canMove(c5->c->x(), c5->c->y() - 1) == true) {
        c5->move(y);
    }
    else if(y == 2 && c5->canMove(c5->c->x(), c5->c->y() + 1) == true) {
        c5->move(y);
    }
    else if(y == 3 && c5->canMove(c5->c->x() - 1, c5->c->y()) == true) {
        c5->move(y);
        if(c5->c->x() == 0.0 && c5->c->y() == c5->y5) {
            c5->c->setPos(440, c5->y5);
        }
    }
    else if(y == 4 && c5->canMove(c5->c->x() + 1, c5->c->y()) == true) {
        c5->move(y);
        if(c5->c->x() == 440.0 && c5->c->y() == c5->y5) {
            c5->c->setPos(0, c5->y5);
        }
    }
    //yello turn
    if (y == 1 && c5->canMove(c5->c->x(), c5->c->y() - 1) == false) {
        if (c5->canMove(c5->c->x() - 1, c5->c->y()) == true && c5->canMove(c5->c->x() + 1, c5->c->y()) == false) {
            y = 3;
        }
        else if (c5->canMove(c5->c->x() - 1, c5->c->y()) == false && c5->canMove(c5->c->x() + 1, c5->c->y()) == true) {
            y = 4;
        }
        else if (c5->canMove(c5->c->x() - 1, c5->c->y()) == true && c5->canMove(c5->c->x() + 1, c5->c->y()) == true) {
            y = 4;
        }
    }
    else if (y == 2 && c5->canMove(c5->c->x(), c5->c->y() + 1) == false) {
        if (c5->canMove(c5->c->x() - 1, c5->c->y()) == true && c5->canMove(c5->c->x() + 1, c5->c->y()) == false) {
            y = 3;
        }
        else if (c5->canMove(c5->c->x() - 1, c5->c->y()) == false && c5->canMove(c5->c->x() + 1, c5->c->y()) == true) {
            y = 4;
        }
        else if (c5->canMove(c5->c->x() - 1, c5->c->y()) == true && c5->canMove(c5->c->x() + 1, c5->c->y()) == true) {
            y = 4;
        }
    }
    else if (y == 3 && c5->canMove(c5->c->x() - 1, c5->c->y()) == false) {
        if (c5->canMove(c5->c->x(), c5->c->y() - 1) == true && c5->canMove(c5->c->x(), c5->c->y() + 1) == false) {
            y = 1;
        }
        else if (c5->canMove(c5->c->x(), c5->c->y() - 1) == false && c5->canMove(c5->c->x(), c5->c->y() + 1) == true) {
            y = 2;
        }
        else if (c5->canMove(c5->c->x(), c5->c->y() - 1) == true && c5->canMove(c5->c->x(), c5->c->y() + 1) == true) {
            y = 2;
        }
    }
    else if (y == 4 && c5->canMove(c5->c->x() + 1, c5->c->y()) == false) {
        if (c5->canMove(c5->c->x(), c5->c->y() - 1) == true && c5->canMove(c5->c->x(), c5->c->y() + 1) == false) {
            y = 1;
        }
        else if (c5->canMove(c5->c->x(), c5->c->y() - 1) == false && c5->canMove(c5->c->x(), c5->c->y() + 1) == true) {
            y = 2;
        }
        else if (c5->canMove(c5->c->x(), c5->c->y() - 1) == true && c5->canMove(c5->c->x(), c5->c->y() + 1) == true) {
            y = 2;
        }
    }
    //yello chase
    if(c5->c->x() == c1->c->x()) {
        if(c5->c->y() > c1->c->y() && c5->canMove(c5->c->x(), c5->c->y() - 1) == true) {
            y = 1;
        }
        else if (c5->c->y() < c1->c->y() && c5->canMove(c5->c->x(), c5->c->y() + 1) == true) {
            y = 2;
        }
    }
    else if (c5->c->y() == c1->c->y()) {
        if(c5->c->x() > c1->c->x() && c5->canMove(c5->c->x() - 1, c5->c->y()) == true) {
            y = 3;
        }
        else if (c5->c->x() < c1->c->x() && c5->canMove(c5->c->x() + 1, c5->c->y()) == true) {
            y = 4;
        }
    }
    c2_->c->setPos(c2->c->x(), c2->c->y());
    c3_->c->setPos(c3->c->x(), c3->c->y());
    c4_->c->setPos(c4->c->x(), c4->c->y());
    c5_->c->setPos(c5->c->x(), c5->c->y());
    if(f == 1 && c1->c->collidesWithItem(c2_->c) == false && C2 != 1) {
        c2_->c->show();
        c2->c->hide();
    }
    if(f == 1 && c1->c->collidesWithItem(c3_->c) == false && C3 != 1) {
        c3_->c->show();
        c3->c->hide();
    }
    if(f == 1 && c1->c->collidesWithItem(c4_->c) == false && C4 != 1) {
        c4_->c->show();
        c4->c->hide();
    }
    if(f == 1 && c1->c->collidesWithItem(c5_->c) == false && C5 != 1) {
        c5_->c->show();
        c5->c->hide();
    }
}

void MainWindow::change_ghost()
{
        f = 0;
        c2->c->show();
        c3->c->show();
        c4->c->show();
        c5->c->show();
        c2_->c->hide();
        c3_->c->hide();
        c4_->c->hide();
        c5_->c->hide();
}

void MainWindow::receiveagain()
{
    set_play();
    this->show();
}
