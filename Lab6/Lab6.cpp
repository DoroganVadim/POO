#include <iostream>
#include "lines.h"
#include "straightLine.h"
#include "ellipse.h"
#include "hyperbola.h"

using namespace std;

int main()
{
	Lines* l[3];
	l[0] = new StraightLine(2, 4);
	l[1] = new Ellipse(6, 2);
	l[2] = new Hyperbola(8, 3);
	for (int i = 0; i < sizeof(l) / sizeof(l[0] ); i++) {
		cout << l[i]->f_x() << endl;
	}
}
