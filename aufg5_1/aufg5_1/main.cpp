/*Aufgabe 1:
a) Machen Sie sich mit den grundsätzlichen Möglichkeiten der Ein- und Ausgabe in C++ (Objekte "cout" und "cin") vertraut.
b) Wiederholung Sie den grundsätzlichen Aufbau von Klassen und deren Eigenschaften*/

#include <iostream>;
#include <string>;
#include <cstdlib>;

using namespace std;
class test1
{
private:
	float re, im;
public:
	void init(float rez, float imz)
	{
		re = rez;
		im = imz;
	}
	void erg(void)
	{
		cout << "Realteil: " << re << endl << "Imaginaerteil: " << im << endl;
	}
};

void main(void)
{
	test1 komplex1;
	komplex1.init(10, 332);
	komplex1.erg();

	/*
	int zahl = 13;
	cout << "Der Wert der Zahl ist: \n";
	cout << zahl << endl << "TE" << endl << "ST" << endl;

	cout << endl << "Zahl in Oktal: " << oct << zahl;
	cout << endl << "Zahl in Hexa.: " << hex << zahl;
	cout << endl << "Zahl in Dezimal: " << dec << zahl;
	cout << endl;
	*/
}