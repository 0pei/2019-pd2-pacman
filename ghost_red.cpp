#include "ghost_red.h"

ghost_red::ghost_red(int x, int y)
{
    c = new QGraphicsPixmapItem(QPixmap(":/ghost/ghost1_d.png"));
    c->setPos(x, y);
}

ghost_red::~ghost_red()
{
    delete c;
}

void ghost_red::move(int n)
{
    if(n == 1) {
        c->setPos(c->x(), c->y() - 1);
        c->setPixmap(QPixmap(":/ghost/ghost1_u.png"));
    }
    else if (n == 2) {
        c->setPos(c->x(), c->y() + 1);
        c->setPixmap(QPixmap(":/ghost/ghost1_d.png"));
    }
    else if (n == 3) {
        c->setPos(c->x() - 1, c->y());
        c->setPixmap(QPixmap(":/ghost/ghost1_l.png"));
    }
    else if (n == 4) {
        c->setPos(c->x() + 1, c->y());
        c->setPixmap(QPixmap(":/ghost/ghost1_r.png"));
    }
}
