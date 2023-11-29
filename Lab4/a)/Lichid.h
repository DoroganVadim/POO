class Lichid {
protected:
	char* denumire;
	float densitate;
	virtual void in(std::istream& is);
	virtual void out(std::ostream& os);
public:
	Lichid();
	Lichid(const char* denumire, float densitate);
	Lichid(const Lichid& l);
	~Lichid();
	void setDenumire(const char* denumire);
	void setDensitate(double densitate);
	friend std::istream& operator >>(std::istream& is, Lichid& l);
	friend std::ostream& operator <<(std::ostream& os, Lichid& l);
};
