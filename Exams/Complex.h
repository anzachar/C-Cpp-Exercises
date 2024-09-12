#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
	public:
		Complex(double x, double z); // Constructor to initialize real and imaginary part of the number
		
		void disp()const; // method to display the complex number
		
		Complex add(const Complex* c)const; //method to add complex numbers
		Complex subtract(const Complex* c)const;//method to subtract complex numbers
		
		
	private:
		double real;
		double im;
};

#endif