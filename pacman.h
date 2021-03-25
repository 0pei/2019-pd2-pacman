#ifndef PACMAN_H
#define PACMAN_H

#include "character.h"

class pacman : public character
{
public:
    pacman(int x, int y);
    ~pacman();
    void move(int n);
};

#endif // PACMAN_H
