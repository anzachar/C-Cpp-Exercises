#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex(double x, double z) // Constructor to initialize real and imaginary part
{
	real=x;
	im=z;
}
	
		
void Complex::disp()const // method to display the complex number
{
	if (im>=0)
	{
		cout<<real<<"+"<<im<<"i"<<endl;
	}
	else
	{
		cout<<real<<"-"<<-im<<"i"<<endl;
	}
}
Complex Complex::add(const Complex* c)const //method to add complex numbers
{
	return Complex(real + c->real, im + c->im);
}
Complex Complex::subtract(const Complex* c)const //method to subtract complex numbers
{
	return Complex(real -c->real, im -c->im);
}