#pragma once
#include "Motor.h"

class MotorImp : public Motor
{
private:
	TSensor* sensor;
	bool running;
public:
	MotorImp(TSensor* TS) : sensor(TS) { running = false; };
	void start() { running = true; };
	void stop() { running = false; };
	bool status() { return running; };
	TSensor* getTSensor() { return sensor; };
};