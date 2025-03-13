#include <iostream>
#include "TSensorImp.h"
#include "MotorImp.h"
#include "TemperatuurWindow.h"
#include "MachineImp.h"
#include "Applicatie.h"

int main()
{
    TSensorImp* TS1 = new TSensorImp();
    TSensorImp* TS2 = new TSensorImp();

    MotorImp* M1 = new MotorImp(TS1);
    MotorImp* M2 = new MotorImp(TS2);

    TemperatuurWindow* TW1 = new TemperatuurWindow(TS1);
    TemperatuurWindow* TW2 = new TemperatuurWindow(TS2);

    MachineImp* Machien = new MachineImp(M1,M2);

    Applicatie* programma = new Applicatie(Machien, TW1, TW2);

    programma->launch();

    delete TS1, TS2, M1, M2, TW1, TW2, Machien, programma;

    return 0;
}
