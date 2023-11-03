#include<iostream>
#include<cmath>
using namespace std;
int c;
void solve()
{
	for(int a=1;a<c;a++)
	{
		double b=sqrt(c*c-a*a);
		if(b==(int)b)
		{
			cout<<a<<" "<<b<<endl;
			return;
		}
	}
}
int main()
{
	cin>>c;
	solve();
	return 0;
}
