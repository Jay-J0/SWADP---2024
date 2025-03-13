#include "Snelheid.h"


Snelheid::Snelheid ( )
{
    waarde = 0;
}

Snelheid::~Snelheid ( )
{
}

void Snelheid::meet ( )
{
    //lees(waarde);
    ///cout << "Geef snelheid: ";
    cin >> waarde;
    notify( );
}

float Snelheid::geef ( ) const
{
    return waarde;
}