#include<iostream>
#include<algorithm>
using namespace std;
int a_min=1005,a_max=0,n;
int a[1005];
int f(int x)
{
	double ans=(x-a_min)/(1.0*a_max-a_min)*100;
	return (int)ans;
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		a_max=max(a_max,a[i]);
		a_min=min(a_min,a[i]);
	};
	for(int i=0;i<n;i++)
	{
		cout<<f(a[i])<<" ";
	}
	cout<<endl;
	return 0;
}
