#include "Snelheid.h"
#include "DigitaleMeter.h" 

DigitaleMeter::DigitaleMeter(Snelheid* s) : Observer(s) {
}

DigitaleMeter::~DigitaleMeter() {
}

void DigitaleMeter::update()
{
    float x = dynamic_cast<Snelheid*>(getSubject())->geef();
    cout << "Digitale meter: " << x << endl;
}

