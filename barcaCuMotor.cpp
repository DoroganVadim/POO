#include "barcaCuMotor.h"
#include <iostream>

void BarcaCuMotor::out(std::ostream& os) {
	os << "Nr. Rotatii elice: " << this->nrRotatiiElice << "\nViteza pe apa: " << this->vitezaPeApa;
}

BarcaCuMotor::BarcaCuMotor() {
	nrRotatiiElice = 0; 
	vitezaPeApa = 0;
}

BarcaCuMotor::BarcaCuMotor(double vitezaPeApa, double nrRotatiiElice) {
	this->vitezaPeApa = vitezaPeApa;
	this->nrRotatiiElice = nrRotatiiElice;
}

std::ostream& operator <<(std::ostream& os, BarcaCuMotor b) {
	b.out(os);
	return os;
}