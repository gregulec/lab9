#pragma once
#include<iostream>

using namespace std;

struct Complex {
	double real;
	double imaginary;

	Complex();
	Complex(double real, double imaginary);
	Complex operator+(Complex m);
	Complex operator-(Complex m);
	Complex operator*(Complex m);
};

ostream& operator<<(ostream& w, Complex&m);

istream& operator>>(istream& w, Complex&m);