#pragma once
class TSensor;  // Forward declaration

class Motor {
public:
    virtual ~Motor() {};
    virtual TSensor* getTSensor() = 0;
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual bool status() = 0;
};

class Mone : public Motor {
};

class Mtwo : public Motor {
};