#include <iostream>
#include "Matrix.h"

using namespace std;

int main(){
    Matrix m1 = Matrix(2);
    Matrix m2 = Matrix(2, 2);
    m1.setElement(0, 0, '!');
    m1.setElement(0, 1, 'a');
    m1.setElement(1, 0, 'b');
    m1.setElement(1, 1, 'c');
    cout << "Matricea 1: " << endl;
    m1.printMatrix();

    m2.setElement(0, 0, '!');
    m2.setElement(0, 1, 'e');
    m2.setElement(1, 0, '1');
    m2.setElement(1, 1, 'b');
    cout << "Matricea 2: " << endl;
    m2.printMatrix();
    
    Matrix m3 = m1.add(m2);
    cout << "Adunarea: " << endl;
    m3.printMatrix();
    Matrix m4 = m1.substract(m2);
    cout << "Scaderea: " << endl;
    m4.printMatrix();
    Matrix m5 = m1.multiply(m2);
    cout << "Inmultirea matricelor: " << endl;
    m5.printMatrix();
    Matrix m6 = m1.multiply(3);
    cout << "Inmultirea primei matrici cu scalar: " << endl;
    m6.printMatrix();
    return 0;
}
