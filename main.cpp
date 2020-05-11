#include "Complex.h"
#include <iostream>

using namespace std;


int main() {
	Complex c;
	Complex d(5, 4);
	Complex f(d);
	cout << c << " " << d << " " << f << " Constructors" << endl;
	f.set(10, 8);
	cout << f.getRe() << " + " << f.getIm() << "i" << " - set && get" << endl;
	Complex k;
	k = c + d;
	cout << k << " operator + " << endl;
	k = k - d;
	cout << k << " operator - " << endl;
	k = f / d;
	cout << " operator / " << k << endl;
	k = f * d;
	cout << k << " operator * " << endl;
	k = d;
	cout << k << " operator = " << endl;
	cout << (k == d) << " operator == " << endl;
	cout << (c == d) << " operator == " << endl;

	Complex r;
	cin >> r;
	cout << r << " operator cin>> " << endl;

	return 0;
}