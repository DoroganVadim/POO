#include <iostream>
#include "Double.h"

Double::Double() {
	num = 0;
}

Double::Double(double d) {
	num = d;
}

Double Double::operator+(const Double d) {
	return num + d.num;
}

Double Double::operator+(double d) {
	return num + d;
}

Double Double::operator++() {
	num += 1;
	return Double(num);
}

Double Double::operator++(int i) {
	num += 1;
	return Double(num - 1);
}

Double operator-(const Double d1,const Double d2) {
	return Double(d1.num - d2.num);
}

Double operator-(const Double d1, double d) {
	return Double(d1.num - d);
}

Double operator--(Double &d) {
	d.num -= 1;
	return d;
}

Double operator--(Double &d,int i) {
	d.num -= 1;
	return Double(d.num + 1);
}

std::istream& operator>>(std::istream& is, Double& d) {
	is >> d.num;
	return is;
}

std::ostream& operator<<(std::ostream& os, const Double& d) {
	os << d.num;
	return os;
}
