class Double {
private:
	double num;

public:
	Double();
	Double(double d);
	
	Double operator+(const Double d);
	Double operator+(double d);
	Double operator++();
	Double operator++(int i);

	friend Double operator-(const Double d1,const Double d2);
	friend Double operator-(const Double d1, double d);
	friend Double operator--(Double &d);
	friend Double operator--(Double &d, int i);

	friend std::istream& operator>>(std::istream& i, Double& d);
	friend std::ostream& operator<<(std::ostream& o, const Double& d);
};
