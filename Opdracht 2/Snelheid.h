#ifndef SNELHEID_H
#define SNELHEID_H

#include "Observer.h"

#include <iostream>

using namespace std;


class Snelheid : public Subject
{
private:
    float waarde;

public:
    Snelheid ();
    ~Snelheid( );
    void meet( );
    float geef( ) const;
};
#endif //       SNELHEID_H