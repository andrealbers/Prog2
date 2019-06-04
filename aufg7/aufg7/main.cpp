#include <iostream>

using namespace std;


class klasse2 {
public:
	klasse2()
		{cout << "\nkonstruktor klasse2";}
	~klasse2()
		{cout << "\ndestruktor klasse2";}
};


class klasse1 {
public:
	klasse1()
	{cout << "\nkonstruktor klasse1";}
	~klasse1()
	{cout << "\ndestruktor klasse1";}
private:
	klasse2 obj22;
	klasse2 obj23;
};


class klasse3 {
public:
	klasse3()
		{cout << "\nkonstruktor klasse3";}
	~klasse3()
		{cout << "\ndestruktor klasse3";}
};


void main() {
	klasse1 *obj10 = new klasse1;
	klasse1 *obj11 = new klasse1;
	klasse3 *obj30 = new klasse3;
	klasse2 *obj20 = new klasse2;
	klasse2 *obj21 = new klasse2;

	delete obj10;
	delete obj20;
	delete obj21;
	delete obj30;
	delete obj11;
	

	cout << endl;
	system("PAUSE");
}