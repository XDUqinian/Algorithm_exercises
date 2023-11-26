#include<iostream>
#include<cmath> 
using namespace std;

int x1,y1,x2,y2;

int ans()
{
	if((x1+x2+y1+y2)%2==1) return -1;
	int res=abs(x2-x1);
	if(res%2==1) res++;
	res+=abs(y2-y1);
	return res;
}
int main()
{
	cin>>x1>>y1>>x2>>y2;
	cout<<ans()<<endl;
	return 0;
} 
