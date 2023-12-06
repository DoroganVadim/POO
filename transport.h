#include <iostream>
class Transport {
protected:
	double viteza;
	virtual void out(std::ostream& os);
public:
	Transport();
	Transport(double vitaza);
	friend std::ostream& operator << (std::ostream& os, Transport t);
};

/*class BarcaCuMotor : public Transport {
protected:
	double nrRotatiiElice;
	void out(std::ostream& os) override;
public:
	BarcaCuMotor();
	BarcaCuMotor(double nrRotatiiElice, double vitezaPeApa);
	friend std::ostream& operator<<(std::ostream& os, BarcaCuMotor b);
};*/

/*class Motocicleta : public Transport {
protected:
	virtual void out(std::ostream& os) override;
public:
	Motocicleta();
	Motocicleta(double vitezaPePamant);
	friend std::ostream& operator << (std::ostream& os, Motocicleta m);
};

class MotocicletaDeApa : public Motocicleta, public BarcaCuMotor {
protected:
	virtual void out(std::ostream& os) override;
public:
	MotocicletaDeApa();
	MotocicletaDeApa(double nrRotatiiElice, double vitezaPeApa);
	friend std::ostream& operator <<(std::ostream& os, MotocicletaDeApa m);
};*/
