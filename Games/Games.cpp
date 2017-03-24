// Games.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void showMenu();

int main()
{
	int izbor = 1;

	while (izbor != 0)
	{
		showMenu();
		cin >> izbor;

		switch (izbor)
		{
		case 1: // Nick onoga tko je napravio igru
				//igra();
			break;

		case 2: // Nick onoga tko je napravio igru
				//igra();
			break;

		case 0: // Izlaz iz programa
			break;

		default: // Krivi unos
			cout << "UPISAO SI NEPOSTOJECI BROJ !" << endl;
			cout << "UKLIKNI ZA NOVI UNOS..." << endl;
			system("pause>nul");
			break;
		}
	}

	cout << "KLIKNI ZA IZLAZ IZ PROGRAMA..." << endl;
	system("pause>nul");
	return 0;
}

void showMenu()
{
	system("cls");
	cout << "MENU: " << endl << endl;
	// DODAVATI OVDJE
	cout << "\t0\tIZLAZ" << endl << endl;
	cout << "UPISI BROJ ZA IGRU: " << endl;
}