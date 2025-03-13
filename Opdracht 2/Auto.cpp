#include "Auto.h"
#include "Snelheid.h"

Auto::Auto ( Snelheid* s ) : S(s)
{
}

Auto::~Auto ( )
{
}

void Auto::meetSnelheid ( )
{
    S->meet( );
}