#include<iostream>
#include<algorithm>
using namespace std;
int ans(int a,int p)
{
	if(p>=16&&p<=20) return a;
	if(p<16) return max(0,a-10);
	if(p>20) return max(0,a-(p-20));
}
int main()
{
	int T;
	cin>>T; 
	while(T--)
	{
		int a,p;
		cin>>a>>p;
		cout<<ans(a,p)<<endl;
	}
	return 0;
}
