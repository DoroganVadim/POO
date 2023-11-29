
class FereastraCuButonSiMesaj : public Fereastra{
protected:
	std::string text;
public:
	FereastraCuButonSiMesaj();
	FereastraCuButonSiMesaj(double x, double y, Buton* buton, std::string text);
	FereastraCuButonSiMesaj(const FereastraCuButonSiMesaj &fbm);
	friend std::ostream& operator <<(std::ostream& os, const FereastraCuButonSiMesaj fbm);
};