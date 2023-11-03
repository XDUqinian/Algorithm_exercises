#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
double ans(int x)
{
	if(x>=90) return 4.0;
	if(x>=60)
	{
		int y=90-x;
		return 4.0-y*0.1;
	}
	x=(int)(sqrt(x)*10);
	if(x<60) return 0;
	return ans(x);
	
}
int main()
{
	double x;
	cin>>x;
	printf("%.1lf\n",ans(x));
	return 0;
}
