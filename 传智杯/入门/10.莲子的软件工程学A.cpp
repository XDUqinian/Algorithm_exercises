#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
ll sgn(ll x)
{
	return (x>0)?1:-1;
}
int main()
{
	ll a,b;
	cin>>a>>b;
	ll ans=sgn(b)*abs(a);
	cout<<ans<<endl;
	return 0;
}
//32λ��������С����ȡ����ֵ�ᱬint 
