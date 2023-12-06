#include <iostream>
#include <string>
#include "barcaCuMotor.h"
#include "motocicleta.h"
#include "motocicletaDeApa.h"

using namespace std;

int main()
{
    BarcaCuMotor bm = BarcaCuMotor(7, 40);
    Motocicleta m = Motocicleta(90);
    MotocicletaDeApa ma = MotocicletaDeApa(7,50);
    cout << "Barca:\n" << bm;
    cout << "\n\nMotocicleta:\n" << m;
    cout << "\n\nMotocicleta de apa:\n" << ma << endl;
}
