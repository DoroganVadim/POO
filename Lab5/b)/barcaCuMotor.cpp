#include "transport.h"
#include "barcaCuMotor.h"
#include <iostream>

void BarcaCuMotor::out(std::ostream& os) {
	os << "Nr. Rotatii elice: " << this->nrRotatiiElice << "\nViteza pe apa: " << this->viteza;
}

BarcaCuMotor::BarcaCuMotor() : Transport() {
	nrRotatiiElice = 0; 
}

BarcaCuMotor::BarcaCuMotor(double vitezaPeApa, double nrRotatiiElice) : Transport(vitezaPeApa) {
	this->nrRotatiiElice = nrRotatiiElice;
}

std::ostream& operator <<(std::ostream& os, BarcaCuMotor b) {
	b.out(os);
	return os;
}
