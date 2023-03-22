#include<iostream>
using namespace std;
class Complex
{
	public:
		double a,b;
		Complex(double aa,double bb)
		{
			this->a=aa;
			this->b=bb;
		}
		Complex(){
		}
		void print()
		{
			if(a!=0)
			{
				cout<<this->a;
				if(this->b>0)
				{
					if(this->b!=1)  cout<<"+"<<this->b<<"i";
					else cout<<"+i";
				}
				else if(this->b<0)
				{
					if(this->b!=-1) cout<<this->b<<"i";
					else cout<<"-i";	
				}
				cout<<endl;
			}
			else
			{
				if(this->b>0)
				{
					if(this->b!=1) cout<<this->b<<"i";
					else cout<<"i";
				}
				else if(this->b<0)
				{
					if(this->b!=-1) cout<<this->b<<"i";
					else cout<<"-i"<<endl;
				}
				else cout<<0;
				cout<<endl;
			}
		}
};
Complex operator +(Complex x,Complex y)
{
	Complex res;
	res.a=x.a+y.a;
	res.b=x.b+y.b;
	return res;
}
Complex operator -(Complex x,Complex y)
{
	Complex res;
	res.a=x.a-y.a;
	res.b=x.b-y.b;
	return res;
}
Complex operator *(Complex x,Complex y)
{
	Complex res;
	res.a=x.a*y.a-x.b*y.b;
	res.b=x.a*y.b+x.b*y.a;
	return res;
}
Complex operator /(Complex x,Complex y)
{
	Complex res;
	res.a=(x.a*y.a+x.b*y.b)/(y.a*y.a+y.b*y.b);
	res.b=(x.a*y.b+x.b*y.a)/(y.a*y.a+y.b*y.b);
	return res;
}
int main()
{
	Complex x(1,1);
	Complex y(1,-2);
	(x+y).print();
	(x-y).print();
	(x*y).print();
	(x/y).print();
	return 0;
}
