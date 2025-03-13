// ================================================================
// Infrastructure Layer
// ================================================================
#include <iostream>
#include <list>
using namespace std;

class Subject;
class Observer
{
private: Subject* S;
protected: Subject* getSubject() const { return S; }
public: Observer (Subject* s) ;
virtual ~Observer ();
virtual void update () = 0;
};

class Subject
{
private: list<Observer*> L;
protected: virtual void notify ();
public: Subject () { }
virtual ~Subject() { }
virtual void insert (Observer* s) { L.push_front(s); }
virtual void remove (Observer* s) { L.remove(s); }
};
void Subject::notify ()
{
for (list<Observer*>::iterator i=L.begin(); i!=L.end(); ++i)
(*i)->update();
}
Observer::Observer (Subject* s) : S(s)
{
getSubject()->insert(this);
}
Observer::~Observer ()
{
getSubject()->remove(this);
}

// ================================================================
// DomainLayer
// ================================================================
class Element
{
public: virtual ~Element () {}
virtual void draw () = 0;
virtual string name () = 0;
};

class Ninja : public Element, public Subject
{
private: string Name;
int AantalLevens;
public: Ninja (string n) : Name(n), AantalLevens(1) { }
virtual void draw () { } //word niet meer gebruikt
virtual string name () { return Name; }
virtual int aantalLevens () { return AantalLevens; }
virtual void incLevens () { AantalLevens++; notify(); }
virtual void decLevens () { AantalLevens--; notify(); }
};

// ================================================================
// Interfacelayer
// ================================================================
class NinjaWindow : public Observer
{
private: Ninja& N;
public: NinjaWindow (Ninja& n) : N(n), Observer(&n) {}
virtual ~NinjaWindow () {}
virtual void draw() { string N = dynamic_cast<Ninja*>(getSubject())->name(); int L = dynamic_cast<Ninja*>(getSubject())->aantalLevens(); cout << N << L << "\n";}
virtual void update() {draw();}
};

int main( )
{ Ninja h("Henk"), j("Joop");
NinjaWindow hW(h), jW(j);
h.incLevens(); //hW.draw();
h.incLevens(); //hW.draw();
j.incLevens(); //jW.draw();
j.incLevens(); //jW.draw();
j.incLevens(); //jW.draw();
h.incLevens(); //hW.draw();
return 0;
}
// ================================================================