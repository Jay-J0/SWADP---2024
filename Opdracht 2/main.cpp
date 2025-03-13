#include <iostream>
#include <string>

#include "Snelheid.h"
#include "DigitaleMeter.h"
#include "AnalogeMeter.h"
#include "Auto.h"

using namespace std;

int main ( )
{
Snelheid S;
DigitaleMeter DM ( &S );
AnalogeMeter AM ( &S );
Auto A ( &S );
A.meetSnelheid ( );
return 0;
}