#ifndef ANALOGEMETER_H
#define ANALOGEMETER_H

#include "Observer.h"

class Snelheid;

class AnalogeMeter : public Observer
{
private:
    Snelheid* S;

public:
    AnalogeMeter (Snelheid* s);
    ~AnalogeMeter( );
    void update ( );
};

#endif //       ANALOGEMETER_H