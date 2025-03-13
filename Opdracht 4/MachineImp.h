#pragma once
#include "Machine.h"
#include "Motor.h"

class MachineImp : public Machine
{
private:
	Motor* Mone;
	Motor* Mtwo;
public:
	MachineImp(Motor* m1, Motor* m2) : Machine(), Mone(m1), Mtwo(m2) {};
	void run() { Mone->start(); Mtwo->start(); };
	void halt() { Mone->stop(); Mtwo->stop(); };
	Motor* getMotor1() { return Mone; };
	Motor* getMotor2() { return Mtwo; };

};

