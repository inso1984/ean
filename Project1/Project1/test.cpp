// *******************************
// Projekt: M404 - Uebung - Tag6
// Copyright:
// Author: Janet Eberlein
// Datum: 30.12.2018
// Programmname: m404_tag6_workshop_4.cpp
// *******************************

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>


using namespace std;

int main() {

	cout << "******************" << endl;
	cout << "*** Divisionen ***" << endl;
	cout << "******************" << endl << endl;

	int ausfuehren = 1;

	while (ausfuehren)
	{

		cout << "Bitte g oder G fuer Ganzzahl-Division eingeben" << endl;
		cout << "Bitte f oder F fuer Float-Division eingeben" << endl;

		char auswahl;
		cin >> auswahl;

		if (auswahl == 'g' || auswahl == 'G' || auswahl == 'f' || auswahl == 'F')
		{
			switch (auswahl)
			{
			case 'g':	int izahl1, izahl2;
				cout << "Bitte die erste Zahl eingeben: ";
				cin >> izahl1;
				cout << "Bitte die zweite Zahl eingeben: ";
				cin >> izahl2;
				cout << "Das Ergebnis lautet: " << izahl1 / izahl2 << endl;
				cout << "Rest: " << izahl1 % izahl2 << endl << endl;
				ausfuehren = 0;
				break;
			case 'G': 	int izahl3, izahl4;
				cout << "Bitte die erste Zahl eingeben: ";
				cin >> izahl3;
				cout << "Bitte die zweite Zahl eingeben: ";
				cin >> izahl4;
				cout << "Das Ergebnis lautet: " << izahl3 / izahl4 << endl;
				cout << "Rest: " << izahl3 % izahl4 << endl << endl;
				ausfuehren = 0;
				break;
			case 'f':	float fzahl1, fzahl2;
				cout << "Bitte die erste Zahl eingeben: ";
				cin >> fzahl1;
				cout << "Bitte die zweite Zahl eingeben: ";
				cin >> fzahl2;
				cout << "Das Ergebnis lautet: " << fzahl1 / fzahl2 << endl << endl;
				ausfuehren = 0;
				break;
			case 'F':	float fzahl3, fzahl4;
				cout << "Bitte die erste Zahl eingeben: ";
				cin >> fzahl3;
				cout << "Bitte die zweite Zahl eingeben: ";
				cin >> fzahl4;
				cout << "Das Ergebnis lautet: " << fzahl3 / fzahl4 << endl << endl;
				ausfuehren = 0;
				break;
			}

		}
		else
		{
			cout << "Deine Eingabe ist ungueltig. Bitte neu waehlen." << endl << endl;
			ausfuehren = 1;
		}
	}

	system("PAUSE");
	return 0;
}
