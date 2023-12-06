
class BarcaCuMotor: virtual public Transport {
protected:
	double nrRotatiiElice;
	void out(std::ostream& os) override;
public:
	BarcaCuMotor();
	BarcaCuMotor(double nrRotatiiElice, double vitezaPeApa);
	friend std::ostream& operator<<(std::ostream& os, BarcaCuMotor b);
};