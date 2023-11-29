#include <iostream>
#include "Lichid.h"
#include "BauturaAlcoolica.h"

void BauturaAlcoolica::in(std::istream& is){
	Lichid::in(is);
	is >> this->tarie;
}

void BauturaAlcoolica::out(std::ostream& os) {
	Lichid::out(os);
	os << " " << this->tarie;
}

BauturaAlcoolica::BauturaAlcoolica() : Lichid() {
	this->tarie = 0;
}
BauturaAlcoolica::BauturaAlcoolica(const char* denumire, float densitate, float tarie) : Lichid(denumire, densitate) {
	this->tarie = tarie;
}
BauturaAlcoolica::BauturaAlcoolica(const BauturaAlcoolica& b) : Lichid(Lichid(b.denumire, b.densitate)) {
	this->tarie = b.tarie;
}
void BauturaAlcoolica::setTarie(double tarie) {
	this->tarie = tarie;
}