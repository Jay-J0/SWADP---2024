#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <string>
#include "Locatie.h"
using namespace std;

class Locatie;

class Robot
{
public:
    Robot(Locatie* p);//constructor
    ~Robot(); // Destructor
    virtual void run();
    virtual void show();
private:
    Locatie* P;
};

#endif // ROBOT_H