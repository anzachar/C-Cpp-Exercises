#include <iostream>
#include "Complex.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	cout<<"\n---Mannual test---"<<endl;;
    Complex c1(-3.1, 4.2); // 1st complex number //
    Complex c2(1.05, -2.1); // 2nd complex number //

	cout<<"---Results---"<<endl;
    // Addition //
    Complex sum = c1.add(&c2);
    cout << "Sum: ";
    sum.disp();

    // Subtraction //
    Complex diff = c1.subtract(&c2);
    cout << "Difference: ";
    diff.disp();
    
    cout<<"\n---User test---\n";
    double x1,z1,x2,z2;
    
    cout<<"Enter the real part of the 1st complex number: ";
    cin>>x1;
    cout<<"Enter the imaginary part of the 1st complex number: ";
    cin>>z1;
    Complex cu1(x1,z1); //using constructor to create the 1st complex number based on user input//
    
    cout<<"Enter the real part of the 2nd complex number: ";
    cin>>x2;
    cout<<"Enter the imaginary part of the 2nd complex number: ";
    cin>>z2;
    Complex cu2(x2,z2); //using constructor to create the 2nd complex number based on user input//
    
    cout<<"---Results---"<<endl;
    
    // Addition //
    Complex sum_user = cu1.add(&cu2);
    cout << "Sum: ";
    sum_user.disp();

    // Subtraction //
    Complex diff_user = cu1.subtract(&cu2);
    cout << "Difference: ";
    diff_user.disp();
    

    

    return 0;
}
