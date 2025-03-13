#pragma once
class Motor;  // Forward declaration

class Machine {
public:
    virtual Motor* getMotor1() = 0;
    virtual Motor* getMotor2() = 0;
    virtual void run() = 0;
    virtual void halt() = 0;
};