#include <iostream>

using namespace std;

struct vector {
	long* elemente;
	int n = -1;
};

void initVector(vector &v) {
	v.elemente = NULL;
	v.n = 0;
}

void setVectorSize(vector& v, int newN) {
	long* newV = new long[newN];
	if (v.elemente != NULL) {
		int n;
		if (newN < v.n) n = newN;
		else n = v.n;
		for (int i = 0; i < n; i++) {
			newV[i] = v.elemente[i];
		}
		delete v.elemente;
	}
	v.elemente = newV;
	v.n = newN;
}

int getVectorSize(vector v) {
	return v.n;
}

void setElementAt(vector &v, int i, long elem) {
	v.elemente[i] = elem;
}

long elementAt(vector v, int i) {
	return v.elemente[i];
}

void freeVector(vector &v) {
	delete [] v.elemente;
	v.n = -1;
}

long sumNeg(vector v) {
	long sum = 0;
	for (int i = 0; i < v.n; i++) {
		if(elementAt(v,i) < 0) sum += elementAt(v, i);
	}
	return sum;
}

int main()
{
	vector a;
	initVector(a);
	vector b;
	initVector(b);
	int n;
	cout << "Deti numarul de elemente pentru primul vector:\nn = ";
	cin >> n;
	setVectorSize(a, n);
	cout << "Dati elementele: ";
	for (int i = 0; i < getVectorSize(a); i++) {
		int elem;
		cin >> elem;
		setElementAt(a, i, elem);
	}

	cout << "Deti numarul de elemente pentru al doilea vector:\nn = ";
	cin >> n;
	setVectorSize(b, n);
	cout << "Dati elementele: ";
	for (int i = 0; i < getVectorSize(b); i++) {
		int elem;
		cin >> elem;
		setElementAt(b, i, elem);
	}

	cout << "\nSuma elementelor negative din vectorul a: " << sumNeg(a) << "\n";
	cout << "Suma elementelor negative din vectorul b: " << sumNeg(b) << "\n";
	cout << "Suma vectorilor a si b:" << "\n";
	n = getVectorSize(a) > getVectorSize(b) ? getVectorSize(a) : getVectorSize(b);
	for (int i = 0; i < n; i++) {
		int elem;
		if (i >= getVectorSize(a)) cout << elementAt(b, i) << " ";
		else if (i >= getVectorSize(b)) cout << elementAt(a, i) << " ";
		else cout << elementAt(a, i) + elementAt(b, i) << " ";
	}
	cout << "\n";
}