// No Overiding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

class baseClass final {
public:
    virtual void perkenalan() final {
        cout << " Halo saya Function dari base class";

    }
};

class derivedClass : public baseClass {
public:
    void perkenalan() {
        cout << "Halo saya function dari derived class ";
    }
};



int main()
{
    derivedClass a;
    a.perkenalan();

    return 0;
}


