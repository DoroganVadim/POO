class Motocicleta : virtual public Transport {
protected:
	void out(std::ostream& os) override;
public:
	Motocicleta();
	Motocicleta(double vitezaPePamant);
	friend std::ostream& operator << (std::ostream& os, Motocicleta m);
};