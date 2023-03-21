#include<iostream>
#include<cmath>
using namespace std;
class Circle
{
	public:
		double Radius;
		Circle(double x)
		{
			Radius=x;
		}
		double GetArea()
		{
			return Radius*Radius*M_PI;
		}
};
int main()
{
	Circle a(1);
	cout<<a.GetArea()<<endl;
	return 0;
}
