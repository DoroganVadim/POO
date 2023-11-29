#include "Buton.h"
#include "Fereastra.h"
#include "FereastraCuButonSiMesaj.h"
#include <iostream>

FereastraCuButonSiMesaj::FereastraCuButonSiMesaj() : Fereastra() {
	this->text = "";
}

FereastraCuButonSiMesaj::FereastraCuButonSiMesaj(double x, double y, Buton * buton, std::string text) : Fereastra(x, y, NULL) {
	this->buton = buton;
	this->text = text;
}
FereastraCuButonSiMesaj::FereastraCuButonSiMesaj(const FereastraCuButonSiMesaj& fbm) : Fereastra(fbm.x, fbm.y, NULL){
	this->buton = fbm.buton;
	this->text = fbm.text;
}

std::ostream& operator <<(std::ostream& os, FereastraCuButonSiMesaj fbm) {
	os << "(" << fbm.x << "," << fbm.y << ")";
	if (fbm.buton != NULL) os << "\nbuton: " << fbm.buton->getText();
	os << "\ntext: " << fbm.text;
	return os;
}