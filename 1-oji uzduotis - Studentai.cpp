// 1oji uzduotis-Studentai.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

struct studentas {// studento struktura, kuri susideda is sekenciu elementu (kintamuju):
	string vardas;
	string pavarde;
	int pazymiai[10];// nusistatom kad bus 10 pazymiu, kuriuos saugosim masyve
	int egzamino_pazimys;
	double galutinis_rezultatas;
	double galutinis_mediana;
};

int main()
{
	studentas temp;
	int n, sum = 0; // norint sudeti pazymius pradedam nuo 0
	char atsakymas;
	cout << "Informacija apie studenta:\n" << endl;
	cout << "Iveskite varda: ";
	cin >> temp.vardas;
	cout << "Iveskite pavarde: ";
	cin >> temp.pavarde;
	cout << "Iveskite egzaminu pazymi: ";
	cin >> temp.egzamino_pazimys;
	cout << "Kiek turit pazymiu uz namu darbus (1-10)? ";
	cin >> n;

	for (int i = 0; i < n; i++)// 
		
		//if (n >= 6) {
			//break;
		//}
		{		
			cout << "Iveskite pazymi: " << i + 1<< " ";
			cin >> temp.pazymiai[i];
			
		}

		cout << "Ar dar turite pazymiu uz namu darbus (y/n)? ";// sekanciai realizuoju break
		cin >> atsakymas;
		while (atsakymas == 'y' || atsakymas == 'Y')//pasitikrinu ar turi pazymiu
		{                                           // jei atsakymas n (neigiamas) isveda duomenis
			cin >> atsakymas;
		}
		temp.galutinis_rezultatas = 0.4 * double(sum) / double(n) + 0.6 * temp.egzamino_pazimys;// duota formule is salygos
		temp.galutinis_mediana = double(n) / 2;
		cout << "Vardas\t" << "Pavarde\t" << "Galutinis rezultatas\t" << "Galutinis Mediana" <<endl;
		cout << temp.vardas << "\t" << temp.pavarde << "\t" << temp.galutinis_rezultatas << "\t" << temp.galutinis_mediana<< endl;
		printf("%10s %10s %5s %5s\n", "Vardas\t", "Pavarde\t", "Galutinis rezultatas\t", "Galutinis Mediana");
		printf("%9s %15s %20lf %20lf\n", temp.vardas.c_str(), temp.pavarde.c_str(), temp.galutinis_rezultatas, temp.galutinis_mediana);
		
		return 0;


}


