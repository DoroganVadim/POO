#include "Vector.h"
#include <iostream>
#include <math.h>

Vector::Vector() {
	this->elements = NULL;
	this->n = 0;
}

Vector::Vector(int n) {
	this->n = n;
	this->elements = new double[n];
	for (int i = 0; i < n; i++) {
		this->elements[i] = 0;
	}

}

Vector::Vector(double* nums, int n) {
	if (nums != NULL) {
		this->n = n;
		this->elements = new double[n];
		for (int i = 0; i < n; i++) {
			this->elements[i] = nums[i];
		}
	}
}

Vector::Vector(const Vector& v) {
	this->n = v.n;
	for (int i = 0; i < n; i++) {
		this->elements[i] = v.elements[i];
	}
}

Vector::~Vector() {
	if(this->elements != NULL)delete [] this->elements;
}

Vector Vector::operator+(const Vector& v) {
	int nMin = 0;
	int nMax = 0;
	Vector result;
	if (this->n < v.n) {
		nMin = this->n;
		result = Vector(v.n);
		for (int i = nMin; i < result.n; i++) {
			result.elements[i] = v.elements[i];
		}
	}
	else{
		nMin = v.n;
		result = Vector(this->n);
		for (int i = nMin; i < result.n; i++) {
			result.elements[i] = this->elements[i];
		}
	}
	
	for (int i = 0; i < nMin; i++) {
		result.elements[i] = this->elements[i] + v.elements[i];
	}
	return result;
}
Vector Vector::operator-(const Vector& v) {
	int nMin = 0;
	int nMax = 0;
	Vector result;
	if (this->n < v.n) {
		nMin = this->n;
		result = Vector(v.n);
		for (int i = nMin; i < result.n; i++) {
			result.elements[i] = 0 - v.elements[i];
		}
	}
	else {
		nMin = v.n;
		result = Vector(this->n);
		for (int i = nMin; i < result.n; i++) {
			result.elements[i] = 0 - this->elements[i];
		}
	}

	for (int i = 0; i < nMin; i++) {
		result.elements[i] = this->elements[i] - v.elements[i];
	}
	return result;
}
void Vector::operator=(const Vector& v) {
	this->~Vector();
	this->n = v.n;
	this->elements = new double[this->n];
	for (int i = 0; i < this->n; i++) {
		this->elements[i] = v.elements[i];
	}
}

bool operator==(const Vector& v1, const Vector& v2) {
	if (v1.n != v2.n) return false;
	for (int i = 0; i < v1.n; i++) {
		if (v1.elements[i] != v2.elements[i]) return false;
	}
	return true;
}

bool operator!=(const Vector& v1, const Vector& v2) {
	if (v1.n != v2.n) return true;
	for (int i = 0; i < v1.n; i++) {
		if (v1.elements[i] != v2.elements[i]) return true;
	}
	return false;
}
double Vector::vectLenght() {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += pow(elements[i], 2);
	}
	return sqrt(sum);
}
bool operator>(Vector& v1, Vector& v2) {
	if (v1.vectLenght() > v2.vectLenght()) return true;
	else return false;
}
bool operator<(Vector& v1, Vector& v2) {
	if (v1.vectLenght() < v2.vectLenght()) return true;
	else return false;
}


std::istream& operator>>(std::istream& is, Vector& v) {
	if (v.elements == NULL) {
		v.elements = new double[v.n];
	}
	for (int i = 0; i < v.n; i++) {
		is >> v.elements[i];
	}
	return is;
}

std::ostream& operator<<(std::ostream& os, const Vector& v) {
	if (v.elements == NULL) {
		os << "NULL" << " ";
	}
	else {
		for (int i = 0; i < v.n; i++) {
			os << v.elements[i] << " ";
		}
	}
	return os;
}

