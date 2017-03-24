// Games.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <windows.h>

using namespace std;

void showMenu();
void Zmijica();

int main()
{
	int izbor = 1;

	srand(time(NULL));

	while (izbor != 0)
	{
		showMenu();
		cin >> izbor;

		switch (izbor)
		{
		case 1: // Zmijica by Luka
			Zmijica();
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
	cout << "\t1\tZmijica (by Luka)" << endl;
	//-------------------------------
	cout << "\t0\tIZLAZ" << endl << endl;
	cout << "UPISI BROJ ZA IGRU: " << endl;
}

void Zmijica()
{
	struct Ship {
		int x;
		int y;
		int a;
	};
	
	int polje[20][20];

	Ship ship;
	ship.x = rand() % 10 + 5;
	ship.y = rand() % 10 + 5;
	ship.a = rand() % 4;

	for (int i = 0; i < 100; i++)
	{
		switch (ship.a)
		{
		case 0:
			if (ship.x == 0 && ship.y == 0) ship.a = 3;
			else if (ship.x == 0) ship.a = 2;
			else if (ship.y == 0) ship.a = 1;
			break;
		case 1:
			if (ship.x == 0 && ship.y == 19)ship.a = 2;
			else if (ship.x == 0) ship.a = 3;
			else if (ship.y == 19) ship.a = 1;
			break;
		case 2:
			if (ship.x == 19 && ship.y == 0) ship.a = 1;
			else if (ship.x == 19) ship.a = 0;
			else if (ship.y == 0) ship.a = 2;
			break;
		case 3:
			if (ship.x == 19 && ship.y == 19) ship.a = 0;
			else if (ship.x == 19) ship.a = 1;
			else if (ship.y == 19) ship.a = 2;
			break;
		}

		switch (ship.a)
		{
		case 0:
			ship.x = ship.x - 1;
			ship.y = ship.y - 1;
			break;
		case 1:
			ship.x = ship.x - 1;
			ship.y = ship.y + 1;
			break;
		case 2:
			ship.x = ship.x + 1;
			ship.y = ship.y - 1;
			break;
		case 3:
			ship.x = ship.x + 1;
			ship.y = ship.y + 1;
			break;
		}

		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; j < 20; j++)
			{
				if (polje[i][j] > 0)
				{
					polje[i][j]--;
				}
			}
		}
		polje[ship.x][ship.y] = 5;
				
		system("cls");		

		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; j < 20; j++)
			{
				if (polje[i][j] == 5)
				{
					cout << "O ";
				}
				else if (polje[i][j] > 0)
				{
					cout << ". ";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
		}

		Sleep(100);
	}

	system("pause");
}