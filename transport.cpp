#include "transport.h"
#include <ostream>

void Transport::out(std::ostream& os) {
	os << "Viteza: " << viteza;
}
Transport::Transport() {
	viteza = 0;
}

Transport::Transport(double vitaza) {
	this->viteza = vitaza;
}

std::ostream& operator << (std::ostream& os, Transport t) {
	t.out(os);
	return os;
}