#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
    Vector v1;
    double l[] = { 1.3,2.4,1.1,3};
    v1 = { l ,sizeof(l) / sizeof(double) };
    cout << "v1 = " << v1 << endl;
    Vector v2;
    int n;
    cout << "\ndati:\nn = ";
    cin >> n;
    v2 = Vector(n);
    cout << "v2 = ";
    cin >> v2;
    cout << "\nv1 + v2 = " << v1 + v2;
    cout << "\nv1 - v2 = " << v1 - v2;
    cout << "\nv1 == v2: " << (v1 == v2);
    cout << "\nv1 != v2: " << (v1 != v2);
    cout << "\nv1(lungimea = " << v1.vectLenght() << ") > v2(lungimea = " << v2.vectLenght() << "): " << (v1 > v2);
    cout << "\nv1(lungimea = " << v1.vectLenght() << ") < v2(lungimea = " << v2.vectLenght() << "): " << (v1 < v2);
}