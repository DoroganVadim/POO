#include "motocicleta.h"
#include <iostream>

void Motocicleta::out(std::ostream& os) {
	os << "Viteza pe pamant: " << vitezaPePamant;
}

Motocicleta::Motocicleta() {
	vitezaPePamant = 0;
}
Motocicleta::Motocicleta(double vitezaPePamant) {
	this->vitezaPePamant = vitezaPePamant;
}

std::ostream& operator << (std::ostream& os, Motocicleta m) {
	m.out(os);
	return os;
}