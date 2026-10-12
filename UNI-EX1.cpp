#include<iostream>
using namespace std;

class Complex
{
	int real, imaginary;
	public:
		void set (int r1, int img)
		{
			real =r1;
			imaginary = img;
		}
		void show()
		{
			cout<<real<<" + i"<<imaginary<<endl;
		}
		Complex add(Complex x, Complex y)
		{
			Complex temp;
			temp.real =x.real +y.real;
			temp.imaginary = x.imaginary +y.imaginary;
			return temp;
		}
		
		Complex sub(Complex x, Complex y)
		{
			Complex temp;
			temp.real = x.real-y.real;
			temp.imaginary =x.imaginary- y.imaginary;
			return temp;
		}
		
		Complex mul(Complex x, Complex y)
		{
			Complex temp;
			temp.real = (x.real*y.real)-(x.imaginary*y.imaginary);
			temp.imaginary =(x.real*y.imaginary)+(x.imaginary* y.real);
			return temp;
		}
		Complex scalarmul (Complex x, int z)
		{
			Complex temp;
			temp.real = x.real*z;
			temp.imaginary =x.imaginary*z;
			return temp;
		}
};

int main()
{
    Complex c1,c2,c3;
    c1.set(8,12);
    c2.set(4,5);
    cout<<endl<<"Result of complex addition:"<<endl;
    c3 = c3.add(c1,c2);
    c3.show();
    cout<<endl<<"Result of complex subtraction:"<<endl;
    c3 = c3.sub(c1,c2);
    c3.show();
    cout<<endl<<"Result of complex multiplication:"<<endl;
    c3 = c3.mul(c1,c2);
    c3.show();
    cout<<endl<<"Result of complex multiplication with a scalar:"<<endl;
    c3 = c3.scalarmul(c1,2);
    c3.show();
    return 0;
}
