/****IIZ01010****
Harjoitus 7
Ryhmä: IIO14S2
Tekijä: Joel Kortelainen
Kuvaus: Ohjelma kysyy käyttäjältä nimen, pituuden sentteinä ja painon kiloina.
Ohjelma laskee ja tulostaa käyttäjän ihannepainon (pituus-100). Lisäksi
ohjelma kertoo käyttäjän nykyisen painon eron kiloina verrattuna ihanne-
painoon.
Versio 1.0
24.9.2014
*/
#include <iostream>
#include <string>
using namespace std;

string Name;
string Address;
float Height;
float Weight;
float IdealWeight;
int b = 100;

void Calculate(float, int);

int main()

{
	cout << "Your name? ";
	getline(cin, Name);
	cout << "Your height in centimeters? ";
	cin >> Height;
	cout << "Your weight in kilograms? ";
	cin >> Weight;
	cout << "Your address? ";
	cin.ignore(2, '\n');
	getline(cin, Address);
	Calculate(Height, b);


	cout << "Dear " << Name << endl;
	cout << "Your address is " << Address << endl;
	cout << "Your current weight is " << Weight << " kg " << endl;
	cout << "Your ideal weight is " << IdealWeight << " kg " << endl;	
	cout << "Weight difference is " << abs(Weight - IdealWeight) << " kg ";

	return(0);
}

void Calculate(float a, int b)
{
	IdealWeight = a - 100;
}
