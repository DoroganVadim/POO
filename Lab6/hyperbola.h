#ifndef HYPERBOLA_H
#define HYPERBOLA_H
#include "lines.h"
class Hyperbola : public Lines{
private:
	float a;
	float b;
public:
	Hyperbola(float a, float b);
	std::string f_x() override;
};

#endif
