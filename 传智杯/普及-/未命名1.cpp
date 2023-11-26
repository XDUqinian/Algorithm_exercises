#include<iostream>
#include<cmath> 
using namespace std;
#define ll long long
ll ans(ll x1,ll x2,ll y1,ll y2)
{
	if( (int)(abs(x1)+abs(y1)+abs(x2)+abs(y2))%2==1 ) return -1;
	int res=abs(x2-x1);
	if(res%2==1)
	{
		if(res!=1) res++;
	}
	res+=abs(y2-y1);
	return res;
}
int main()
{
	ll x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	cout<<ans(x1,x2,y1,y2)<<endl;
	return 0;
} 
