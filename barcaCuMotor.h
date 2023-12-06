#include <ostream>
class BarcaCuMotor {
protected:
	double nrRotatiiElice;
	double vitezaPeApa;
	virtual void out(std::ostream& os);
public:
	BarcaCuMotor();
	BarcaCuMotor(double nrRotatiiElice, double vitezaPeApa);
	friend std::ostream& operator<<(std::ostream& os, BarcaCuMotor b);
};