#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int n;
int a_max=-1,a_min=105;
int x;
int s=0;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		s+=x;
		a_max=max(a_max,x);
		a_min=min(a_min,x);
		if(i<3) continue;
		double ans=(s-(a_max+a_min))/(1.0*(i-2));
		printf("%.2lf\n",ans);
	}
	return 0;
}
