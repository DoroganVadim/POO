#include "transport.h"
#include "motocicleta.h"
#include <iostream>

void Motocicleta::out(std::ostream& os) {
	os << "Viteza pe pamant: " << this->viteza;
}

Motocicleta::Motocicleta() : Transport() { ; }
Motocicleta::Motocicleta(double vitezaPePamant) : Transport(vitezaPePamant) {
	;
}

std::ostream& operator << (std::ostream& os, Motocicleta m) {
	m.out(os);
	return os;
}