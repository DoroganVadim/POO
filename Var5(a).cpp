#include <iostream>
#include "Lichid.h"
#include "BauturaAlcoolica.h"

using namespace std;

int main()
{
	Lichid l = Lichid();
	cout << "Dati denumire si densitatea lichidului - ";
	cin >> l;
	cout << "Lichidul are denumire si densitatea: " << l << endl << endl;

	BauturaAlcoolica ba = BauturaAlcoolica();
	cout  << "Dati denumire, densitatea si taria bauturii alcoolice - ";
	cin >> ba;
	cout << "Bautura are denumire, densitatea si taria: " << ba << endl << endl;
}