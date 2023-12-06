#include <iostream>
#include "transport.h"
#include "barcaCuMotor.h"
#include "motocicleta.h"
#include "motocicletaDeApa.h"



void MotocicletaDeApa::out(std::ostream& os) {
	Motocicleta::out(os);
	os << "\n";
	BarcaCuMotor::out(os);
}

MotocicletaDeApa::MotocicletaDeApa() : Motocicleta(), BarcaCuMotor() {
	;
}

MotocicletaDeApa::MotocicletaDeApa(double nrRotatiiElice, double vitezaPeApa) : BarcaCuMotor(nrRotatiiElice, vitezaPeApa), Motocicleta() {
	;
}

std::ostream& operator <<(std::ostream& os, MotocicletaDeApa m) {
	m.out(os);
	return os;
}
