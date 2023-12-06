#include <iostream>
#include <string>
#include "transport.h"
#include "motocicleta.h"
#include "barcaCuMotor.h"
#include "motocicletaDeApa.h"

using namespace std;

int main()
{
    Transport t = Transport(20);
    BarcaCuMotor bm = BarcaCuMotor(7, 40);
    Motocicleta m = Motocicleta(90);
    MotocicletaDeApa ma = MotocicletaDeApa(7, 50);
    cout << "Transport:\n" << t;
    cout << "\n\nBarca:\n" << bm;
    cout << "\n\nMotocicleta:\n" << m;
    cout << "\n\nMotocicleta de apa:\n" << ma << endl;
}
