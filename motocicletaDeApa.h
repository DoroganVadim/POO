class MotocicletaDeApa : public Motocicleta, public BarcaCuMotor {
protected:
	virtual void out(std::ostream& os) override;
public:
	MotocicletaDeApa();
	MotocicletaDeApa(double nrRotatiiElice, double vitezaPeApa);
	friend std::ostream& operator <<(std::ostream& os, MotocicletaDeApa m);
};