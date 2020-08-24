#include<iostream>
using namespace std;
class Complex
{
	public:
		Complex();
		Complex(double r,double i);
		Complex add(Complex &c2);
		void display();
		Complex operator++(double);
	
	private:
		double real;
		double imag;	
};
Complex::Complex()
{
	real=0;
	imag=0;
}
Complex::Complex(double r,double i)
{
	real=r;
	imag=i;
}
Complex Complex::add(Complex &c2)
{
	Complex c;
	c.real=real+c2.real;
	c.imag=imag+c2.imag;
	return c;
}
void Complex::display()
{  
	cout<<"("<<real<<",";
	cout<<imag<<"i)"<<endl;
}
Complex Complex::operator++(double)
{
	Complex t=*this;
	*this=*this+1;
	return t;
}
int main()
{
	Complex c1(3,4),c2(5,-10),c3;
	Complex *c=new Complex;
	cout<<"c1=";
	c1++;
	c1.display();
	cout<<"c2=";
	c2.display();
	c3=c1.add(c2);
	cout<<"c1+c2=";
	c3.display(); 
	return 0;
}
