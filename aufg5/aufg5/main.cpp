#include <iostream>;
#include <string>;
#include <cstdlib>;

using namespace std;

class zahl {
public:
	void zahlen(void) {
		int zahl;
		char typ;
		typ = eingabeTyp();
		zahl = eingabeZahl(typ);
		ausgabe(zahl);
	}
private:
	char eingabeTyp(void) {
		char typ;
		cout << "Geben Sie den einzugebenen Typ ein: (h)ex, (d)ec, (o)ct)" << endl;
		cin >> typ;
		return typ;
	}

	int eingabeZahl(char typ) {
		int zahl = 0;
		
		switch (typ)
		{
		case 'h':
			cout << "Geben Sie die Zahl ein:" << endl;
			cin >> hex >> zahl;
			return zahl;
			break;
		case 'd':
			cout << "Geben Sie die Zahl ein:" << endl;
			cin >> dec >> zahl;
		    return zahl;
			break;
		case 'o':
			cout << "Geben Sie die Zahl ein:" << endl;
			cin >> oct >> zahl;
			return zahl;
			break;
		default:
			cout << "Falsche Eingabe!";
			return zahl;
			break;
		}
	}

	int ausgabe(int zahl) {
		if (zahl == 0)  return 0;
		cout << "\nZahl in Hex:\t " << hex << zahl << endl;
		cout << "Zahl in Dezimal: " << dec << zahl << endl;
		cout << "Zahl in Oktal:\t " << oct << zahl << endl;
	}

};


int main() {
	zahl changenumber;
	changenumber.zahlen();

	cout << endl << endl;
	system("PAUSE");
}