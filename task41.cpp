#include<iostream>
using namespace std;
class Point
{
	public:
		Point(double x=0,double y=0);
		friend ostream & operator<<(ostream &,const Point&);
	protected:
		double x;
		double y; 
};
Point::Point(double a,double b):x(a),y(b){}
ostream &operator<<(ostream &output,const Point&p)
{
	output<<"µã:["<<p.x<<","<<p.y<<"]"<<endl;
	return output;
}
class Circle:public Point
{
	public:
		Circle(double x=0,double y=0,double r=0);
		double area() const;
		friend ostream &operator<<(ostream &,const Circle&);
	protected:
		double r;
};
Circle::Circle(double a,double b,double c):Point(a,b),r(a){}
double Circle::area() const{return 3.14159*r*r;}
ostream &operator<<(ostream &output,const Circle&c)
{
	output<<"Ô²£ºcenter=["<<c.x<<","<<c.y<<"],r="<<c.r<<",area="<<c.area()<<endl;
	return output;
}
class Cylinder:public Circle
{
	public:
		
		double area()
		{
			
		}
	protected:
		double h;
};
int main()
{
	Point p(3,4);
	cout<<p<<endl;
	Circle c(3,4,5);
	cout<<c<<endl;
	return 0;
}
