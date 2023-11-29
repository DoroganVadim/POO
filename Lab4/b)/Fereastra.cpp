#include "Buton.h"
#include "Fereastra.h"
#include <iostream>


Fereastra::Fereastra() {
	this->x = 0;
	this->y = 0;
	this->buton = NULL;
}

Fereastra::Fereastra(double x, double y, Buton* buton) {
	this->x = x;
	this->y = y;
	this->buton = buton;
}

Fereastra::Fereastra(const Fereastra& fereastra) {
	this->x = fereastra.x;
	this->y = fereastra.y;
	this->buton = fereastra.buton;
}