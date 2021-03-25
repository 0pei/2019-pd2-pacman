#ifndef GHOST_PINK_H
#define GHOST_PINK_H

#include "character.h"

class ghost_pink : public character
{
public:
    ghost_pink(int x, int y);
    ~ghost_pink();
    void move(int n);
};

#endif // GHOST_PINK_H
