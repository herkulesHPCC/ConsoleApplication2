// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
class czlowiek
{
private:
	char Naz[256];
	char Im[256];
	int wiek;
public:
	void set();
	void view();
	czlowiek();
	
};

int main()
{
	czlowiek A1;
	A1.view();
	system("PAUSE");
    return 0;
}

void czlowiek::set()
{
	cout << "Podaj imie: ";
	cin >> Naz;
	cout << "Podaj nazwisko: ";
	cin >> Im;
	cout << "Podaj wiek: ";
	cin >> wiek;
}

void czlowiek::view()
{
	cout << Im << Naz << wiek;
}

czlowiek::czlowiek()
{
	Naz[0] = '\0';
	Im[0] = '\0';
	wiek = '\0';

}
