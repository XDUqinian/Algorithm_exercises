#include<iostream>
using namespace std;
int m,n;
int cnt[25];
int main()
{
	cin>>n>>m;
	int t=m+n;
	while(t--)
	{
		int x;
		cin>>x;
		cnt[x]++;
	}
	int ans=0;
	for(int i=0;i<25;i++) if(cnt[i]==2) ans++;
	cout<<ans<<endl;
	return 0;
} 
