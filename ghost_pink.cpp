#include "ghost_pink.h"

ghost_pink::ghost_pink(int x, int y)
{
    c = new QGraphicsPixmapItem(QPixmap(":/ghost/ghost3_l.png"));
    c->setPos(x, y);
}

ghost_pink::~ghost_pink()
{
    delete c;
}

void ghost_pink::move(int n)
{
    if(n == 1) {
        c->setPos(c->x(), c->y() - 1);
        c->setPixmap(QPixmap(":/ghost/ghost3_u.png"));
    }
    else if (n == 2) {
        c->setPos(c->x(), c->y() + 1);
        c->setPixmap(QPixmap(":/ghost/ghost3_d.png"));
    }
    else if (n == 3) {
        c->setPos(c->x() - 1, c->y());
        c->setPixmap(QPixmap(":/ghost/ghost3_l.png"));
    }
    else if (n == 4) {
        c->setPos(c->x() + 1, c->y());
        c->setPixmap(QPixmap(":/ghost/ghost3_r.png"));
    }
}
