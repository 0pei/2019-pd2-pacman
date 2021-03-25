#ifndef GHOST_RED_H
#define GHOST_RED_H

#include "character.h"

class ghost_red : public character
{
public:
    ghost_red(int x, int y);
    ~ghost_red();
    void move(int n);
};

#endif // GHOST_RED_H
