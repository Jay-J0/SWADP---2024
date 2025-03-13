#ifndef LOCATIE_H
#define LOCATIE_H

class Locatie
{
public:
    virtual ~Locatie() {}// virtual destructor
    virtual void move(int dx, int dy) = 0;// pure virtual function
    virtual int getX() const = 0;// pure virtual function
    virtual int getY() const = 0;// pure virtual function
};

#endif //       LOCATIE_H