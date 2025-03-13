#ifndef DIGITALEMETER_H
#define DIGITALEMETER_H

#include "Observer.h"

class Snelheid;

class DigitaleMeter : public Observer
{
private:
    Snelheid* S;
    
public:
    DigitaleMeter (Snelheid* s);
    ~DigitaleMeter( );
    void update ( );
};

#endif //       DIGITALEMETER_H