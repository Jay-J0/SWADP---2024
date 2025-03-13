#ifndef POSITIE_H
#define POSITIE_H
#include <iostream>
#include <string>
#include "Locatie.h"
using namespace std;

class Positie : public Locatie
{
public:
    Positie(int x, int y);//constructor
    ~Positie(); // Destructor
    virtual void move(int dx, int dy) override;  
    virtual int getX() const override;
    virtual int getY() const override;
private:
    int x;
    int y;
};

#endif // POSITIE_H