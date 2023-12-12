#include "straightLine.h"
#include <string.h>
#include <string>

StraightLine::StraightLine(float a, float b) {
	this->a = a;
	this->b = b;
}
std::string StraightLine::f_x(){
	return "y = " + std::to_string(this->a) + "x + " + std::to_string(this->b);
}