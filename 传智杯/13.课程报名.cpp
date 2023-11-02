#include<iostream>
using namespace std;
int n,v,m,a;
int main()
{
	cin>>n>>v>>m>>a;
	int ans=0;
	int cost=v;
	for(int i=1;i<=n;i++)
	{
		ans+=cost;
		cost=v+a*(i/m);
//		cout<<cost<<" ";
	}
	cout<<ans<<endl;
	return 0;
}
