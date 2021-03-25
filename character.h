#ifndef CHARACTER_H
#define CHARACTER_H

#include <QGraphicsPixmapItem>
#include <QDebug>

class character
{

public:
    character();
    virtual ~character();
    virtual void move(int n);
    bool canMove(double x, double y);
    bool canTurn(double x, double y);
    void repair();
    QGraphicsPixmapItem *c;
    static int index, add;
    static double x1, x2, x3, x4, x5, x6, x7, x8, x9 ,x10;
    static double y1, y2, y3, y4, y5, y6, y7, y8, y9 ,y10;
};

#endif // CHARACTER_H
