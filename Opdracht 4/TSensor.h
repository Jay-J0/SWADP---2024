#pragma once

#include "Observer.h"

class TSensor : public Subject {
public:
    virtual void read() = 0;
    virtual int temperatuur() = 0;
};