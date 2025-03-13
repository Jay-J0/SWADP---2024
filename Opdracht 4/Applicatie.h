#pragma once

#include "TemperatuurWindow.h"
#include "MachineImp.h"

class Applicatie
{
	private:
		Machine* machine;
		TemperatuurWindow* TW1;
		TemperatuurWindow* TW2;
	public:
		Applicatie(Machine* m, TemperatuurWindow* tw1, TemperatuurWindow* tw2) : machine(m), TW1(tw1), TW2(tw2) {};
		void launch();
};

