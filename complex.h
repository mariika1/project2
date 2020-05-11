#pragma once
#include<iostream>

using namespace std;
class Complex
{
public:
	Complex();
	void set(double c, double d);
	Complex(double c, double d);
	void setIm(double _Im);
	void setRe(double _Re);
	double getIm();
	double getRe();
	Complex(const Complex& A);
	friend  Complex operator + (Complex& c, Complex& d);
	friend Complex operator - (Complex& c, Complex& d);
	friend Complex operator / (Complex& c, Complex& d);
	friend Complex operator * (Complex& c, Complex& d);
	Complex& operator = (const Complex& c);
	friend bool operator == (Complex& c, Complex& d);
	friend ostream& operator << (ostream& out, Complex& d);
	friend istream& operator >> (istream& in, Complex& d);

private:
	double Im;
	double Re;
};