#include "Buton.h"
#include <string>

Buton::Buton() {
	text = "";
}

Buton::Buton(const std::string text) {
	this->text = text;
}
Buton::Buton(const Buton& buton) {
	this->text = buton.text;
}
std::string Buton::getText() {
	return this->text;
}
void Buton::setText(const std::string text) {
	this->text = text;
}
