#ifndef GHOST_H
#define GHOST_H

#include "character.h"

class ghost : public character
{
public:
    ghost(int x, int y);
    ~ghost();
    void move(int n);
};

#endif // GHOST_H
