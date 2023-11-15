#include <iostream>
class Vector
{
private:
	double *elements;
	int n;
public:
	Vector();
	Vector(int n);
	Vector(double *nums, int n);
	Vector(const Vector &v);
	~Vector();
	Vector operator+(const Vector& v);
	Vector operator-(const Vector& v);
	void operator=(const Vector& v);
	friend bool operator==(const Vector& v1, const Vector& v2);
	friend bool operator!=(const Vector& v1, const Vector& v2);
	double vectLenght();
	friend bool operator>(Vector& v1, Vector& v2);
	friend bool operator<(Vector& v1, Vector& v2);
	friend std::istream& operator>>(std::istream& is, Vector& v);
	friend std::ostream& operator<<(std::ostream& os, const Vector& v);
};