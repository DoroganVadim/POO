#include <iostream>
#include "Double.h"

using namespace std;

int main()
{
	Double d1 = Double(12.5);
	Double d2 = Double(5.7);
	double pd1 = 13.3;
	double pd2 = 2.3;
	cout << "Adunarea 1: (" << typeid(d1).name() << ")" << d1 << " + (" << typeid(d2).name() << ")" << d2 << " = " << d1 + d2 << endl;
	cout << "Adunarea 2: (" << typeid(d1).name() << ")" << d1 << " + (" << typeid(pd1).name() << ")" << pd1 << " = " << d1 + pd1 << endl;
	cout << "\nScaderea 1: (" << typeid(d1).name() << ")" << d1 << " - (" << typeid(d2).name() << ")" << d2 << " = " << d1 - d2 << endl;
	cout << "Scaderea 2: (" << typeid(d1).name() << ")" << d1 << " - (" << typeid(pd2).name() << ")" << pd2 << " = " << d1 - pd2 << endl;

	Double d4;
	cout << "\nCitirea: d4 = ";
	cin >> d4;
	cout << "Numarul citit:" << d4 << endl;
	cout << "Exemplu cu (variabila)++: d4 = " << d4 << " -> d5 = ";
	Double d5 = d4++;
	cout << d5 << "\nd4(dupa ++) = " << d4 << endl << endl;
	cout << "Exemplu cu ++(variabila): d4 =" << d4 << " -> d5 = ";
	d5 = ++d4;
	cout << d5 << "\nd4(dupa ++) = " << d4 << endl << endl;
	
}