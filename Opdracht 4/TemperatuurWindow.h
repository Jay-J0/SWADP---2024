#pragma once
#include "Observer.h"
#include "TSensor.h"
#include <iostream>

class TemperatuurWindow : public Observer
{
private:
	TSensor* TS;
public:
	TemperatuurWindow(TSensor* s) : Observer(s), TS(s) {};
	void update() override { 
		TSensor* sensor = dynamic_cast<TSensor*>(getSubject());
		if (sensor != nullptr) { toon(sensor->temperatuur()); }; 
	};
	void toon(int T) { std::cout << T << "°C)" << std::endl; };
};

