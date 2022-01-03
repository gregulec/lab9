#include<iostream>
#include"Complex.h"

using namespace std;

	Complex::Complex(double real, double imaginary) {
		this->real = real;
		this->imaginary = imaginary;
	}
	Complex Complex::operator+(Complex m) {
		return Complex(this->real + m.real, this->imaginary + m.imaginary);
	}
	Complex Complex::operator-(Complex m) {
		return Complex(this->real - m.real, this->imaginary - m.imaginary);
	}
	Complex Complex::operator*(Complex m) {
		return Complex(this->real * m.real - this->imaginary*m.imaginary, this->imaginary*m.real - this->real*m.imaginary);
	}

ostream& operator<<(ostream& w, Complex&m) {
	w << m.real << " + " << m.imaginary << "i";
	return w;
}

istream& operator>>(istream& w, Complex&m) {
	w >> m.real >> m.imaginary;
	return w;
}