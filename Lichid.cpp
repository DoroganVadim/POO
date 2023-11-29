#include <iostream>
#include "Lichid.h"
#include <cstring>

void Lichid::in(std::istream& is){
	is >> this->denumire >> this->densitate;
}

void Lichid::out(std::ostream& os) {
	os << this->denumire << " " << this->densitate;
}

Lichid::Lichid() {
	this->denumire = new char[50];
	this->densitate = 0;
}
Lichid::Lichid(const char* denumire, float densitate) {
	this->denumire = new char[50];
	strcpy_s(this->denumire, 50, denumire);
	this->densitate = densitate;
}
Lichid::Lichid(const Lichid& l) {
	this->denumire = new char[50];
	strcpy_s(this->denumire, 50, l.denumire);
	this->densitate = l.densitate;
}
Lichid::~Lichid() {
	delete[] denumire;
}

void Lichid::setDenumire(const char* denumire) {
	strcpy_s(this->denumire, 50, denumire);
}

void Lichid::setDensitate(double densitate) {
	this->densitate = densitate;
}

std::istream& operator >>(std::istream& is, Lichid& l) {
	l.in(is);
	return is;
}
std::ostream& operator <<(std::ostream& os, Lichid l) {
	l.out(os);
	return os;
}