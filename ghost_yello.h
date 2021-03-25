#ifndef GHOST_YELLO_H
#define GHOST_YELLO_H

#include "character.h"

class ghost_yello : public character
{
public:
    ghost_yello(int x, int y);
    ~ghost_yello();
    void move(int n);
};

#endif // GHOST_YELLO_H
