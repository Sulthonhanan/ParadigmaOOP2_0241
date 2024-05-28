// ParadigmaOOP2_0241.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class orang {

public: 
	int umur;

	orang(int pUmur) : umur(pUmur)

	{
		cout << " orang dibuat dengan umur " << umur << "\n" << endl;
	}


};

class pekerja : public orang {
public:

	pekerja(int pUmur) :
		orang(pUmur)
	{
		cout << " pekerja dibuat \n" << endl;
	}

};

class pelajar : public orang {
public:

};









int main()
{
   
}

