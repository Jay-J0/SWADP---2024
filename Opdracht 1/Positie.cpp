#include "Positie.h"

Positie::Positie(int x, int y) : x(x), y(y)
{
    
}

Positie::~Positie()
{
    
}

void Positie::move(int dx, int dy)
{
    x += dx;
    y += dy;
}

int Positie::getX() const
{
    return x;
}

int Positie::getY() const
{
    return y;
}


