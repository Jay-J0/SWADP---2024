#include "Robot.h"
#include "Positie.h"

Robot::Robot(Locatie* p) : P(p)
{
    
}

Robot::~Robot()
{
    
}

void Robot::run()
{
    std::cout << "Robot is running" << std::endl;
}

void Robot::show()
{
    std::cout << "Robot is at position: " <<  P->getX() << ", " << P->getY() << std::endl;
}
