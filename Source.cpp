#include "Complex.h"

Complex::Complex()
{
	Re = 0;
	Im = 0;
}

void Complex::set(double c, double d)
{
	Re = c;
	Im = d;
}

Complex::Complex(double c, double d)
{
	Re = c;
	Im = d;
}

void Complex::setIm(double _Im)
{
	Im = _Im;
}

void Complex::setRe(double _Re)
{
	Re = _Re;
}

double Complex::getIm()
{
	return Im;
}

double Complex::getRe()
{
	return Re;
}

Complex::Complex(const Complex& A)
{
	Re = A.Re;
	Im = A.Im;
}

Complex operator + (Complex& c, Complex& d)
{

	return Complex(c.Re + d.Re, c.Im + d.Im);
}


Complex operator - (Complex& c, Complex& d)
{
	Complex f;
	f.Re = c.Re - d.Re;
	f.Im = c.Im - d.Im;
	return f;
}

Complex operator / (Complex& c, Complex& d)
{
	Complex f;
	f.Re = (c.Re * d.Re + c.Im * d.Im) / (d.Re * d.Re + d.Im * d.Im);
	f.Im = (d.Re * c.Im - c.Re * d.Im) / (d.Re * d.Re + d.Im * d.Im);
	return f;
}

Complex operator * (Complex& c, Complex& d)
{
	Complex f;
	f.Re = c.Re * d.Re - c.Im * d.Im;
	f.Im = c.Re * d.Im + d.Re * c.Im;
	return f;
}

Complex& Complex:: operator =(const Complex& c)
{
	if (this == &Complex)
		return *this;
	Re = c.Re;
	Im = c.Im;
	return *this;
}

bool operator == (Complex& c, Complex& d)
{
	return ((c.Re == d.Re) && (c.Im == d.Im));
}

ostream& operator << (ostream& out, Complex& d)
{
	out << d.Re << "+" << d.Im << "i";
	return out;
}

istream& operator >> (istream& in, Complex& d)
{
	in >> d.Im;
	in >> d.Re;
	return in;
}