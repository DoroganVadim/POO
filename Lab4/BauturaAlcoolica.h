class BauturaAlcoolica : public Lichid{
protected:
	double tarie;
	void in(std::istream& is) override;
	void out(std::ostream& os) override;
public:
	BauturaAlcoolica();
	BauturaAlcoolica(const char* denumire, float densitate, float tarie);
	BauturaAlcoolica(const BauturaAlcoolica& b);
	void setTarie(double tarie);
	friend std::istream& operator >>(std::istream& is, BauturaAlcoolica& l);
	friend std::ostream& operator <<(std::ostream& os, const BauturaAlcoolica l);
};
