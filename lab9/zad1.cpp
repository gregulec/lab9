#include<iostream>
#include"Complex.h"

using namespace std;

int main() {
	Complex a(1.0, 2.0);
	Complex b(3.0, 4.0);
	//Complex c;
	//c = a + b;
	cout << a+b << endl;
	cout << a-b << endl;
	cout << a*b << endl;
}