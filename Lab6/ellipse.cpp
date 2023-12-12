#include "ellipse.h"
#include <string.h>
#include <string>

Ellipse::Ellipse(float a, float b) {
	this->a = a;
	this->b = b;
}
std::string Ellipse::f_x() {
	return "x^2 / " + std::to_string(this->a) + "^2 + y^2 / " + std::to_string(this->b) + "^2 = 1";
}
