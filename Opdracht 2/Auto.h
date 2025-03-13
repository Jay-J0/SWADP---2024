#ifndef AUTO_H
#define AUTO_H

class Snelheid;

class Auto
{
private:
    Snelheid* S;

public:
    Auto (Snelheid* s);
    ~Auto( );
    void meetSnelheid ( );

};

#endif //       AUTO_H