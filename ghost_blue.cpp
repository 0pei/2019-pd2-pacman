#include "ghost_blue.h"

ghost_blue::ghost_blue(int x, int y)
{
    c = new QGraphicsPixmapItem(QPixmap(":/ghost/ghost2_r.png"));
    c->setPos(x, y);
}

ghost_blue::~ghost_blue()
{
    delete c;
}

void ghost_blue::move(int n)
{
    if(n == 1) {
        c->setPos(c->x(), c->y() - 1);
        c->setPixmap(QPixmap(":/ghost/ghost2_u.png"));
    }
    else if (n == 2) {
        c->setPos(c->x(), c->y() + 1);
        c->setPixmap(QPixmap(":/ghost/ghost2_d.png"));
    }
    else if (n == 3) {
        c->setPos(c->x() - 1, c->y());
        c->setPixmap(QPixmap(":/ghost/ghost2_l.png"));
    }
    else if (n == 4) {
        c->setPos(c->x() + 1, c->y());
        c->setPixmap(QPixmap(":/ghost/ghost2_r.png"));
    }
}
