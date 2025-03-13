#pragma once
#include "TSensor.h"

class TSensorImp : public TSensor
{
private:
	int Temp;
public:
	TSensorImp() { Temp = 0; };
	void read() override { Temp = rand() % 35 + 20; notify(); }
	int temperatuur() override { return Temp; }
};

