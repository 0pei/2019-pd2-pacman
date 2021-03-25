#ifndef GHOST_BLUE_H
#define GHOST_BLUE_H

#include "character.h"

class ghost_blue : public character
{
public:
    ghost_blue(int x, int y);
    ~ghost_blue();
    void move(int n);
};

#endif // GHOST_BLUE_H
