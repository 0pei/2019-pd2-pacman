#include "ghost.h"

ghost::ghost(int x, int y)
{
    c = new QGraphicsPixmapItem(QPixmap(":/ghost/ghost.png"));
    c->setPos(x, y);
}

ghost::~ghost()
{
    delete c;
}

void ghost::move(int n)
{
    if(n == 1) {
        c->setPos(c->x(), c->y() - 1);
    }
    else if (n == 2) {
        c->setPos(c->x(), c->y() + 1);
    }
    else if (n == 3) {
        c->setPos(c->x() - 1, c->y());
    }
    else if (n == 4) {
        c->setPos(c->x() + 1, c->y());
    }
}
