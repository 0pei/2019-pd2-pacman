#include "character.h"

character::character() {}
character::~character() {delete c;}
void character::move(int n)
{
    if(n > 0) {
        qDebug() << "move of character";
    }
}

bool character::canMove(double x, double y)
{
    //y direction
    if(x == x1) {
        if((y >= y1 && y <= y3) || y == y5 || (y >= y7 && y <= y8) || (y >= y9 && y <= y10)) {
            return true;
        }
    }
    else if(x == x2) {
        if(y == y1 || y == y2 || y == y3 || y == y5 || y == y7 || (y >= y8 && y <= y9) || y == y10) {
            return true;
        }
    }
    else if(x == x3) {
        if((y >= y1 && y <= y9) || (y == y10)) {
            return true;
        }
    }
    else if(x == x4) {
        if(y == y1 || (y >= y2 && y <= y3) || (y >= y4 && y <= y7) || (y >= y8 && y <= y9) || y == y10) {
            return true;
        }
    }
    else if(x == x5) {
        if((y >= y1 && y <= y2) || (y >= y3 && y <= y4) || y == y6 || (y >= y7 && y <= y8) || (y >= y9 && y <= y10)) {
            return true;
        }
    }
    else if(x == x6) {
        if((y >= y1 && y <= y2) || (y >= y3 && y <= y4) || y == y6 || (y >= y7 && y <= y8) || (y >= y9 && y <= y10)) {
            return true;
        }
    }
    else if(x == x7) {
        if(y == y1 || (y >= y2 && y <= y3) || (y >= y4 && y <= y7) || (y >= y8 && y <= y9) || y == y10) {
            return true;
        }
    }
    else if(x == x8) {
        if((y >= y1 && y <= y9) || (y == y10)) {
            return true;
        }
    }
    else if(x == x9) {
        if(y == y1 || y == y2 || y == y3 || y == y5 || y == y7 || (y >= y8 && y <= y9) || y == y10) {
            return true;
        }
    }
    else if(x == x10) {
        if((y >= y1 && y <= y3) || y == y5 || (y >= y7 && y <= y8) || (y >= y9 && y <= y10)) {
            return true;
        }
    }
    //x direction
    if(y == y1) {
        if((x >= x1 && x <= x5) || (x >= x6 && x <= x10)) {
            return true;
        }
    }
    else if(y == y2) {
        if(x >= x1 && x <= x10) {
            return true;
        }
    }
    else if(y == y3) {
        if((x >= x1 && x <= x3) || (x >= x4 && x <= x5) || (x >= x6 && x <= x7) || (x >= x8 && x <= x10)) {
            return true;
        }
    }
    else if(y == y4) {
        if(x == x3 || (x >= x4 && x <= x7) || x == x8) {
            return true;
        }
    }
    else if(y == y5) {
        if((x >= 0 && x <= x4) || (x >= x7 && x <= 440)) {
            return true;
        }
    }
    else if(y == y6) {
        if(x == x3 || (x >= x4 && x <= x7) || x == x8) {
            return true;
        }
    }
    else if(y == y7) {
        if((x >= x1 && x <= x5) || (x >= x6 && x <= x10)) {
            return true;
        }
    }
    else if(y == y8) {
        if((x >= x1 && x <= x2) || (x >= x3 && x <= x8) || (x >= x9 && x <= x10)) {
            return true;
        }
    }
    else if(y == y9) {
        if((x >= x1 && x <= x3) || (x >= x4 && x <= x5) || (x >= x6 && x <= x7) || (x >= x8 && x <= x10)) {
            return true;
        }
    }
    else if(y == y10) {
        if(x >= x1 && x <= x10) {
            return true;
        }
    }
    return false;
}

bool character::canTurn(double x, double y)
{
    //y direction
    if(x == x1) {
        if((y >= y1 - 10 && y <= y1 + 10) || (y >= y2 - 10 && y <= y2 + 10) || (y >= y3 - 10 && y <= y3 + 10) || (y >= y5 - 10 && y <= y5 + 10)
        || (y >= y7 - 10 && y <= y7 + 10) || (y >= y8 - 10 && y <= y8 + 10) || (y >= y9 - 10 && y <= y9 + 10) || (y >= y10 - 10 && y <= y10 + 10)) {
            return true;
        }
        return false;
    }
    else if(x == x2) {
        if((y >= y1 - 10 && y <= y1 + 10) || (y >= y2 - 10 && y <= y2 + 10) || (y >= y3 - 10 && y <= y3 + 10) || (y >= y5 - 10 && y <= y5 + 10)
        || (y >= y7 - 10 && y <= y7 + 10) || (y >= y8 - 10 && y <= y8 + 10) || (y >= y9 - 10 && y <= y9 + 10) || (y >= y10 - 10 && y <= y10 + 10)) {
            return true;
        }
        return false;
    }
    else if(x == x3) {
        if((y >= y1 - 10 && y <= y1 + 10) || (y >= y2 - 10 && y <= y2 + 10) || (y >= y3 - 10 && y <= y3 + 10) || (y >= y5 - 10 && y <= y5 + 10)
        || (y >= y6 - 10 && y <= y6 + 10) || (y >= y7 - 10 && y <= y7 + 10) || (y >= y8 - 10 && y <= y8 + 10)|| (y >= y9 - 10 && y <= y9 + 10)
        || (y >= y10 - 10 && y <= y10 + 10)) {
            return true;
        }
        return false;
    }
    else if(x == x4) {
        if((y >= y1 - 10 && y <= y1 + 10) || (y >= y2 - 10 && y <= y2 + 10) || (y >= y3 - 10 && y <= y3 + 10) || (y >= y4 - 10 && y <= y4 + 10)
        || (y >= y5 - 10 && y <= y5 + 10) || (y >= y6 - 10 && y <= y6 + 10) || (y >= y7 - 10 && y <= y7 + 10) || (y >= y8 - 10 && y <= y8 + 10)
        || (y >= y9 - 10 && y <= y9 + 10) || (y >= y10 - 10 && y <= y10 + 10)) {
            return true;
        }
        return false;
    }
    else if(x == x5) {
        if((y >= y1 - 10 && y <= y1 + 10) || (y >= y2 - 10 && y <= y2 + 10) || (y >= y3 - 10 && y <= y3 + 10) || (y >= y4 - 10 && y <= y4 + 10)
        || (y >= y6 - 10 && y <= y6 + 10) || (y >= y7 - 10 && y <= y7 + 10) || (y >= y8 - 10 && y <= y8 + 10) || (y >= y9 - 10 && y <= y9 + 10)
        || (y >= y10 - 10 && y <= y10 + 10)) {
            return true;
        }
        return false;
    }
    else if(x == x6) {
        if((y >= y1 - 10 && y <= y1 + 10) || (y >= y2 - 10 && y <= y2 + 10) || (y >= y3 - 10 && y <= y3 + 10) || (y >= y4 - 10 && y <= y4 + 10)
        || (y >= y6 - 10 && y <= y6 + 10) || (y >= y7 - 10 && y <= y7 + 10) || (y >= y8 - 10 && y <= y8 + 10) || (y >= y9 - 10 && y <= y9 + 10)
        || (y >= y10 - 10 && y <= y10 + 10)) {
            return true;
        }
        return false;
    }
    else if(x == x7) {
        if((y >= y1 - 10 && y <= y1 + 10) || (y >= y2 - 10 && y <= y2 + 10) || (y >= y3 - 10 && y <= y3 + 10) || (y >= y4 - 10 && y <= y4 + 10)
        || (y >= y5 - 10 && y <= y5 + 10) || (y >= y6 - 10 && y <= y6 + 10) || (y >= y7 - 10 && y <= y7 + 10) || (y >= y8 - 10 && y <= y8 + 10)
        || (y >= y9 - 10 && y <= y9 + 10) || (y >= y10 - 10 && y <= y10 + 10)) {
            return true;
        }
        return false;
    }
    else if(x == x8) {
        if((y >= y1 - 10 && y <= y1 + 10) || (y >= y2 - 10 && y <= y2 + 10) || (y >= y3 - 10 && y <= y3 + 10) || (y >= y4 - 10 && y <= y4 + 10)
        || (y >= y5 - 10 && y <= y5 + 10) || (y >= y6 - 10 && y <= y6 + 10) || (y >= y7 - 10 && y <= y7 + 10) || (y >= y8 - 10 && y <= y8 + 10)
        || (y >= y9 - 10 && y <= y9 + 10) || (y >= y10 - 10 && y <= y10 + 10)) {
            return true;
        }
        return false;
    }
    else if(x == x9) {
        if((y >= y1 - 10 && y <= y1 + 10) || (y >= y2 - 10 && y <= y2 + 10) || (y >= y3 - 10 && y <= y3 + 10) || (y >= y5 - 10 && y <= y5 + 10)
        || (y >= y7 - 10 && y <= y7 + 10) || (y >= y8 - 10 && y <= y8 + 10) || (y >= y9 - 10 && y <= y9 + 10) || (y >= y10 - 10 && y <= y10 + 10)) {
            return true;
        }
        return false;
    }
    else if(x == x10) {
        if((y >= y1 - 10 && y <= y1 + 10) || (y >= y2 - 10 && y <= y2 + 10) || (y >= y3 - 10 && y <= y3 + 10) || (y >= y5 - 10 && y <= y5 + 10)
        || (y >= y7 - 10 && y <= y7 + 10) || (y >= y8 - 10 && y <= y8 + 10) || (y >= y9 - 10 && y <= y9 + 10) || (y >= y10 - 10 && y <= y10 + 10)) {
            return true;
        }
        return false;
    }
    //x direction
    if(y == y1) {
        if((x >= x1 - 10 && x <= x1 + 10) || (x >= x2 - 10 && x <= x2 + 10) || (x >= x3 - 10 && x <= x3 + 10) || (x >= x4 - 10 && x <= x4 + 10)
        || (x >= x5 - 10 && x <= x5 + 10) || (x >= x6 - 10 && x <= x6 + 10) || (x >= x7 - 10 && x <= x7 + 10) || (x >= x8 - 10 && x <= x8 + 10)
        || (x >= x9 - 10 && x <= x9 + 10) || (x >= x10 - 10 && x <= x10 + 10)) {
            return true;
        }
    }
    else if(y == y2) {
        if((x >= x1 - 10 && x <= x1 + 10) || (x >= x2 - 10 && x <= x2 + 10) || (x >= x3 - 10 && x <= x3 + 10) || (x >= x4 - 10 && x <= x4 + 10)
        || (x >= x5 - 10 && x <= x5 + 10) || (x >= x6 - 10 && x <= x6 + 10) || (x >= x7 - 10 && x <= x7 + 10) || (x >= x8 - 10 && x <= x8 + 10)
        || (x >= x9 - 10 && x <= x9 + 10) || (x >= x10 - 10 && x <= x10 + 10)) {
            return true;
        }
    }
    else if(y == y3) {
        if((x >= x1 - 10 && x <= x1 + 10) || (x >= x2 - 10 && x <= x2 + 10) || (x >= x3 - 10 && x <= x3 + 10) || (x >= x4 - 10 && x <= x4 + 10)
        || (x >= x5 - 10 && x <= x5 + 10) || (x >= x6 - 10 && x <= x6 + 10) || (x >= x7 - 10 && x <= x7 + 10) || (x >= x8 - 10 && x <= x8 + 10)
        || (x >= x9 - 10 && x <= x9 + 10) || (x >= x10 - 10 && x <= x10 + 10)) {
            return true;
        }
        return false;
    }
    else if(y == y4) {
        if((x >= x3 - 10 && x <= x3 + 10) || (x >= x4 - 10 && x <= x4 + 10) || (x >= x5 - 10 && x <= x5 + 10) || (x >= x6 - 10 && x <= x6 + 10)
        || (x >= x7 - 10 && x <= x7 + 10) || (x >= x8 - 10 && x <= x8 + 10)) {
            return true;
        }
    }
    else if(y == y5) {
        if((x >= x1 - 10 && x <= x1 + 10) || (x >= x2 - 10 && x <= x2 + 10) || (x >= x3 - 10 && x <= x3 + 10) || (x >= x4 - 10 && x <= x4 + 10)
        || (x >= x7 - 10 && x <= x7 + 10) || (x >= x8 - 10 && x <= x8 + 10) || (x >= x9 - 10 && x <= x9 + 10) || (x >= x10 - 10 && x <= x10 + 10)) {
            return true;
        }
    }
    else if(y == y6) {
        if((x >= x3 - 10 && x <= x3 + 10) || (x >= x4 - 10 && x <= x4 + 10) || (x >= x5 - 10 && x <= x5 + 10) || (x >= x6 - 10 && x <= x6 + 10)
        || (x >= x7 - 10 && x <= x7 + 10) || (x >= x8 - 10 && x <= x8 + 10)) {
            return true;
        }
    }
    else if(y == y7) {
        if((x >= x1 - 10 && x <= x1 + 10) || (x >= x2 - 10 && x <= x2 + 10) || (x >= x3 - 10 && x <= x3 + 10) || (x >= x4 - 10 && x <= x4 + 10)
        || (x >= x5 - 10 && x <= x5 + 10) || (x >= x6 - 10 && x <= x6 + 10) || (x >= x7 - 10 && x <= x7 + 10) || (x >= x8 - 10 && x <= x8 + 10)
        || (x >= x9 - 10 && x <= x9 + 10) || (x >= x10 - 10 && x <= x10 + 10)) {
            return true;
        }
    }
    else if(y == y8) {
        if((x >= x1 - 10 && x <= x1 + 10) || (x >= x2 - 10 && x <= x2 + 10) || (x >= x3 - 10 && x <= x3 + 10) || (x >= x4 - 10 && x <= x4 + 10)
        || (x >= x5 - 10 && x <= x5 + 10) || (x >= x6 - 10 && x <= x6 + 10) || (x >= x7 - 10 && x <= x7 + 10) || (x >= x8 - 10 && x <= x8 + 10)
        || (x >= x9 - 10 && x <= x9 + 10) || (x >= x10 - 10 && x <= x10 + 10)) {
            return true;
        }
    }
    else if(y == y9) {
        if((x >= x1 - 10 && x <= x1 + 10) || (x >= x2 - 10 && x <= x2 + 10) || (x >= x3 - 10 && x <= x3 + 10) || (x >= x4 - 10 && x <= x4 + 10)
        || (x >= x5 - 10 && x <= x5 + 10) || (x >= x6 - 10 && x <= x6 + 10) || (x >= x7 - 10 && x <= x7 + 10) || (x >= x8 - 10 && x <= x8 + 10)
        || (x >= x9 - 10 && x <= x9 + 10) || (x >= x10 - 10 && x <= x10 + 10)) {
            return true;
        }
    }
    else if(y == y10) {
        if((x >= x1 - 10 && x <= x1 + 10) || (x >= x2 - 10 && x <= x2 + 10) || (x >= x3 - 10 && x <= x3 + 10) || (x >= x4 - 10 && x <= x4 + 10)
        || (x >= x5 - 10 && x <= x5 + 10) || (x >= x6 - 10 && x <= x6 + 10) || (x >= x7 - 10 && x <= x7 + 10) || (x >= x8 - 10 && x <= x8 + 10)
        || (x >= x9 - 10 && x <= x9 + 10) || (x >= x10 - 10 && x <= x10 + 10)) {
            return true;
        }
    }
    return false;
}

void character::repair()
{
    if(c->x() >= x1 - 10 && c->x() <= x1 + 10) {
        c->setPos(x1, c->y());
    }
    else if(c->x() >= x2 - 10 && c->x() <= x2 + 10) {
        c->setPos(x2, c->y());
    }
    else if(c->x() >= x3 - 10 && c->x() <= x3 + 10) {
        c->setPos(x3, c->y());
    }
    else if(c->x() >= x4 - 10 && c->x() <= x4 + 10) {
        c->setPos(x4, c->y());
    }
    else if(c->x() >= x5 - 10 && c->x() <= x5 + 10) {
        c->setPos(x5, c->y());
    }
    else if(c->x() >= x6 - 10 && c->x() <= x6 + 10) {
        c->setPos(x6, c->y());
    }
    else if(c->x() >= x7 - 10 && c->x() <= x7 + 10) {
        c->setPos(x7, c->y());
    }
    else if(c->x() >= x8 - 10 && c->x() <= x8 + 10) {
        c->setPos(x8, c->y());
    }
    else if(c->x() >= x9 - 10 && c->x() <= x9 + 10) {
        c->setPos(x9, c->y());
    }
    else if(c->x() >= x10 - 10 && c->x() <= x10 + 10) {
        c->setPos(x10, c->y());
    }

    if(c->y() >= y1 - 10 && c->y() <= y1 + 10) {
        c->setPos(c->x() ,y1);
    }
    else if(c->y() >= y2 - 10 && c->y() <= y2 + 10) {
        c->setPos(c->x(), y2);
    }
    else if(c->y() >= y3 - 10 && c->y() <= y3 + 10) {
        c->setPos(c->x(), y3);
    }
    else if(c->y() >= y4 - 10 && c->y() <= y4 + 10) {
        c->setPos(c->x(), y4);
    }
    else if(c->y() >= y5 - 10 && c->y() <= y5 + 10) {
        c->setPos(c->x(), y5);
    }
    else if(c->y() >= y6 - 10 && c->y() <= y6 + 10) {
        c->setPos(c->x(), y6);
    }
    else if(c->y() >= y7 - 10 && c->y() <= y7 + 10) {
        c->setPos(c->x(), y7);
    }
    else if(c->y() >= y8 - 10 && c->y() <= y8 + 10) {
        c->setPos(c->x(), y8);
    }
    else if(c->y() >= y9 - 10 && c->y() <= y9 + 10) {
        c->setPos(c->x(), y9);
    }
    else if(c->y() >= y10 - 10 && c->y() <= y10 + 10) {
        c->setPos(c->x(), y10);
    }
}

int character::index = 1;
int character::add = 1;
double character::x1 = 14;
double character::x2 = 46;
double character::x3 = 95;
double character::x4 = 143;
double character::x5 = 191;
double character::x6 = 239;
double character::x7 = 287;
double character::x8 = 336;
double character::x9 = 384;
double character::x10 = 416;
double character::y1 = 64;
double character::y2 = 128;
double character::y3 = 177;
double character::y4 = 225;
double character::y5 = 273;
double character::y6 = 321;
double character::y7 = 369;
double character::y8 = 418;
double character::y9 = 466;
double character::y10 = 514;
