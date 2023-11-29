#include <string>
#include <iostream>
#include "Buton.h"
#include "Fereastra.h"
#include "FereastraCuButonSiMesaj.h"


using namespace std;

int main()
{
    Buton * b = new Buton("buton1");
    FereastraCuButonSiMesaj fbm = FereastraCuButonSiMesaj(1,3,b,"Hello");
    cout << fbm;
    delete b;
}