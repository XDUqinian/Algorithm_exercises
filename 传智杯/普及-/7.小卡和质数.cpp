#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		if(x==1&&y==2) cout<<"Yes"<<endl;
		else if(x==2&&y==1) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
// 傻逼题
// 发现只有 2 和 3能异或为1
// 因为除了2以外的质数都是奇数，任意两个相异或，最低位一定是 0，因此给出的两个数中一定要有2
// 而能和2异或等于1的质数，只有3 
