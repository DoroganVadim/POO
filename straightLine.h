#ifndef STRAIGHTLINE_H
#define STRAIGHTLINE_H
#include "lines.h"
class StraightLine :public Lines {
private:
	float a;
	float b;
public:
	StraightLine(float a, float b);
	std::string f_x() override;
};

#endif