#include <iostream>
#include <cstdlib>

using namespace std;

class klasse1 {
public:
	static int anz_obj;
	static int klassen_uebrig;
	klasse1();
	klasse1(int);
	klasse1(double);
	klasse1(char);
	~klasse1();
private:
	int int_var1, int_var2;
	double double_var;
	char* zeiger_var;
	unsigned char char_var;
};

int klasse1::anz_obj = 0;
int klasse1::klassen_uebrig = 0;

klasse1::klasse1() {
	
	cout << "Objekt ohne initialisierung!" << endl;
	anz_obj++;	
}

klasse1::klasse1(int) {
	cout << "int wurde aufgerufen!" << endl;
	anz_obj++;
	klassen_uebrig++;
}

klasse1::klasse1(double) {
	cout << "double wurde aufgerufen!" << endl;
	anz_obj++;
	klassen_uebrig++;
}

klasse1::klasse1(char) {
	cout << "char wurde aufgerufen!" << endl;
	anz_obj++;
	klassen_uebrig++;
}

klasse1::~klasse1() {
	cout << "Destrukturaufruf Klasse 1" << endl;
	klassen_uebrig--;
	if(klassen_uebrig == 0) cout << "Es wurden " << anz_obj << " Klassen erstellt!" << endl;
}


void main(void) {
	klasse1 k1;
	klasse1 *k2 = new klasse1(1);
	klasse1 *k3 = new klasse1(2.0);
	klasse1 *k4 = new klasse1('3');
	delete k2;
	delete k3;
	delete k4;
	system("PAUSE");
}