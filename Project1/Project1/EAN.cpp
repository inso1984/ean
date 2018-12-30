// *******************************
// Projekt: M404 - Aufgabe - EAN-Code
// Copyright:
// Author: Janet Eberlein
// Datum: 30.12.2018
// Programmname: EAN.cpp
// *******************************

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

void codeEingabe();
void eanCheck(string);
void pruefung(string);


string code = "";
int ausfuehren = 1;

int main() {

	// Ausgabe Startmeldung
	cout << "************************" << endl;
	cout << "*** Pr""\x81""fung EAN-Code ***" << endl;
	cout << "************************" << endl << endl;
	
	while (ausfuehren)
	{
		codeEingabe(); // Funktion zum Code eingeben
		eanCheck(code); // Funktion ur Prüfung ob die Eingabe gültig ist
	}

	system("PAUSE");
	return 0;
}

void codeEingabe()
{
	// Aufforderung zur Eingabe des EAN-Codes
	cout << "Bitte den 13-stelligen EAN-Code eingeben: ";
	getline(cin, code);
	fflush(stdin);
}

void eanCheck(string code)
{	
	// Umwandlung des Strings in eine Ganzzahl
	stringstream str;
	str << code;
	int pruefZahl;
	str >> pruefZahl;
	
	if (code.length() != 13 || pruefZahl == 0) // Prüfung und Ausgabe bei ungültiger Eingabe
	{
		cout << endl << "Deine Eingabe ist ung\x81ltig! Versuche es erneut: " << endl;
		ausfuehren = 1;
	}
	else // Durchführung der Funktion zur Prüfung ob der EAN-Code korrekt ist
	{
		pruefung(code);
		ausfuehren = 0;
	}
}

// Funktion zur Prüfung ob der EAN-Code korrekt ist
void pruefung(string code)
{
	vector<int> ean(13);

	// Umwandlung des eingegebenen Strings in ein Array
	for (int i = 0; i < 13; i++)
	{
		ean[i] = code[i] - '0';
	}

	// Berechnung der Prüfziffer
	int summe1, summe2, pZiffer;

	summe1 = ean[0] + ean[2] + ean[4] + ean[6] + ean[8] + ean[10];
	summe2 = ean[1] + ean[3] + ean[5] + ean[7] + ean[9] + ean[11];

	pZiffer = 10 - ((summe1 + (summe2 * 3)) % 10);

	// Vergleich Prüfziffer mit der letzten Zahl des EAN-Codes
	if (pZiffer == ean[12]) // Ausgabe wenn korrekt
	{
		cout << endl << "Der eingegebene EAN-Code ist korrekt!" << endl << endl;
	} 
	else // Ausgabe wenn falsch
	{
		cout << endl << "Der eingegebene EAN-Code ist falsch!" << endl << endl;
	}
}
