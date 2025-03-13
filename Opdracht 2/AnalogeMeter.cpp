#include "Snelheid.h"
#include "AnalogeMeter.h"

AnalogeMeter::AnalogeMeter(Snelheid* s) : Observer(s) {
}

AnalogeMeter::~AnalogeMeter() {
}

void AnalogeMeter::update()
{
    float x = dynamic_cast<Snelheid*>(getSubject())->geef();
    cout << "Analoge meter: " << x << endl;
}
