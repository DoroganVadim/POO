class Fereastra {
protected:
	Buton * buton;
	double x;
	double y;
public:
	Fereastra();
	Fereastra(double x, double y, Buton *buton);
	Fereastra(const Fereastra& fereastra);
};
