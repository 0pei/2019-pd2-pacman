#include "pacman.h"

pacman::pacman(int x, int y)
{
    c = new QGraphicsPixmapItem(QPixmap(":/pacman/pm2_l.png"));
    c->setPos(x, y);
}

pacman::~pacman()
{
    delete c;
}

void pacman::move(int n)
{
    if(n == 1) {
        c->setPos(c->x(), c->y() - 1);
        if(index == 1) {
            c->setPixmap(QPixmap(":/pacman/pm1_u.png"));
        }
        else if (index == 2) {
            c->setPixmap(QPixmap(":/pacman/pm2_u.png"));
        }
        else if (index == 3) {
            c->setPixmap(QPixmap(":/pacman/pm3_u.png"));
        }
    }
    else if (n == 2) {
        c->setPos(c->x(), c->y() + 1);
        if(index == 1) {
            c->setPixmap(QPixmap(":/pacman/pm1_d.png"));
        }
        else if (index == 2) {
            c->setPixmap(QPixmap(":/pacman/pm2_d.png"));
        }
        else if (index == 3) {
            c->setPixmap(QPixmap(":/pacman/pm3_d.png"));
        }
    }
    else if (n == 3) {
        c->setPos(c->x() - 1, c->y());
        if(index == 1) {
            c->setPixmap(QPixmap(":/pacman/pm1_l.png"));
        }
        else if (index == 2) {
            c->setPixmap(QPixmap(":/pacman/pm2_l.png"));
        }
        else if (index == 3) {
            c->setPixmap(QPixmap(":/pacman/pm3_l.png"));
        }
    }
    else if (n == 4) {
        c->setPos(c->x() + 1, c->y());
        if(index == 1) {
            c->setPixmap(QPixmap(":/pacman/pm1_r.png"));
        }
        else if (index == 2) {
            c->setPixmap(QPixmap(":/pacman/pm2_r.png"));
        }
        else if (index == 3) {
            c->setPixmap(QPixmap(":/pacman/pm3_r.png"));
        }
    }
    index += add;
    if(index == 3 || index == 1) {
        add = -add;
    }
}
