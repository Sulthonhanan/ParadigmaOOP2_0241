// Polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class seseorang {
public:
    virtual void pesan() = 0;
    //Virtual vooid pesan() {
    // cout << " Pesan dari seseorang " << endl;
    //}

};

class joko : public seseorang {
public:
    void pesan() {
        cout << "Pesan dari joko " << endl;
    }
};


class lia : public seseorang {
public:
    void pesan() {
        cout << "Pesan dari Lia " << endl;
    }
};


int main()
{
    std::cout << "Hello World!\n";
}

