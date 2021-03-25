#include "ghost_yello.h"

ghost_yello::ghost_yello(int x, int y)
{
    c = new QGraphicsPixmapItem(QPixmap(":/ghost/ghost4_u.png"));
    c->setPos(x, y);
}

ghost_yello::~ghost_yello()
{
    delete c;
}

void ghost_yello::move(int n)
{
    if(n == 1) {
        c->setPos(c->x(), c->y() - 1);
        c->setPixmap(QPixmap(":/ghost/ghost4_u.png"));
    }
    else if (n == 2) {
        c->setPos(c->x(), c->y() + 1);
        c->setPixmap(QPixmap(":/ghost/ghost4_d.png"));
    }
    else if (n == 3) {
        c->setPos(c->x() - 1, c->y());
        c->setPixmap(QPixmap(":/ghost/ghost4_l.png"));
    }
    else if (n == 4) {
        c->setPos(c->x() + 1, c->y());
        c->setPixmap(QPixmap(":/ghost/ghost4_r.png"));
    }
}
