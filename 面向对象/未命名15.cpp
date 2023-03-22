#include<iostream>
#include<cmath>
using namespace std;
class Shape
{
	public:
		virtual double area()=0;
};
class Circle:public Shape
{
	public:
		double r;
		Circle(double rr){r=rr;}
		virtual double area()
		{
			return r*r*M_PI;
		}
};
class Square:public Shape
{
	public:
		double a;
		Square(double aa){a=aa;}
		virtual double area()
		{
			return a*a;
		}
};
class Rectangle:public Shape
{
	public:
		double a,b;
		Rectangle(double aa,double bb){a=aa;b=bb;}
		virtual double area()
		{
			return a*b;
		}
};
class Triangle:public Shape
{
	public:
		double a,h;
		Triangle(double aa,double hh){a=aa;h=hh;}
		virtual double area()
		{
			return a*h/2;
		}
};
class Trapzoid:public Shape
{
	public:
		double a,b,h;
		Trapzoid(double aa,double bb,double hh){a=aa;b=bb;h=hh;}
		virtual double area()
		{
			return (a+b)*h/2;
		}
};
int main()
{
	Shape* arr[5];
	arr[0]=new Circle(1);
	arr[1]=new Square(1);
	arr[2]=new Rectangle(1,2);
	arr[3]=new Triangle(1,1);
	arr[4]=new Trapzoid(1,2,3);
	for(int i=0;i<5;i++) cout<<arr[i]->area()<<endl;;
	return 0;
}
