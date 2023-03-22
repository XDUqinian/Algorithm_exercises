#include<iostream>
using namespace std;
class Date
{
	friend class Time;
	public:
		Date(int yy,int mmon,int dd,int hh,int mmin,int ss)
		{
			y=yy;
			mon=mmon;
			d=dd;
			h=hh;
			min=mmin;
			s=ss;
		}
	private:
		int y,mon,d,h,min,s;
};
class Time
{
	public:
		void display(Date x)
		{
			cout<<x.y<<"."<<x.mon<<"."<<x.d<<" "<<x.h<<":"<<x.min<<":"<<x.s<<endl;
		}
};
int main()
{
	Time t;
	Date date(2023,3,22,20,8,30);
	t.display(date);
	return 0;
} 
