#include <iostream>
#include <cstdlib>

using namespace std;

class c1 {
public:
	c1();
	c1(int wert);
	~c1();
};

c1::c1() {
	cout << "klasse c1 konstruktor 1" << endl;
}

c1::c1(int) {
	cout << "klasse c1 konstruktor 2" << endl;
}

c1::~c1() {
	cout << "klasse c1 destruktor" << endl;
}

class c2 {
public:
	c2(int);
	~c2();
private:
	c1 k3;
	c1 k6;
};

c2::c2(int) {
	cout << "klasse c2 konstruktor 1" << endl;
}

c2::~c2() {
	cout << "klasse c2 destruktor" << endl;
}

void main(void) {
	c1 k1;
	c1 *k5 = new c1(5);
	c2 *k4 = new c2(5);
	
	delete k5;
	delete k4;		
}