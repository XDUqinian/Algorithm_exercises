#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
#define ll long long
ll n;
ll a[1000005];
ll s[1000005];
int main()
{
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=1;i<n;i++) if(a[i]>a[i-1]) s[i]=max(s[i],s[i-1]+1);
	for(int i=n-2;i>=0;i--) if(a[i]>a[i+1]) s[i]=max(s[i],s[i+1]+1);
	ll ans=0;
	for(int i=0;i<n;i++) ans+=s[i];
	ans+=n;
	cout<<ans<<endl;
	return 0;
}
