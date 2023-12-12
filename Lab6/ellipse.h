#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "lines.h"
class Ellipse:public Lines {
private:
	float a;
	float b;
public:
	Ellipse(float a, float b);
	std::string f_x() override;
};

#endif 

