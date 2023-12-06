#include <ostream>
class Motocicleta {
protected:
	double vitezaPePamant;
	virtual void out(std::ostream& os);
public:
	Motocicleta();
	Motocicleta(double vitezaPePamant);
	friend std::ostream& operator << (std::ostream& os, Motocicleta m);
};