#include<iostream>
using namespace std;
#define ll long long
struct node
{
	int x,y;
}a[100005];
int n,x_end,y_end;
int main()
{
	cin>>n>>x_end>>y_end;
	for(int i=1;i<=n;i++) cin>>a[i].x>>a[i].y;
	ll ans=0;
	for(int i=n;i>=1;i--)
	{
//		cout<<i<<":"<<endl;
		if(a[i].x>x_end)
		{
			ans+=a[i].x-x_end;
//			cout<<"����"<<a[i].x-x_end<<endl;
			a[i].x=x_end;			
		}
		if(a[i].x+i-1<x_end)
		{
			ans+=x_end-(a[i].x+i-1);
//			cout<<"����"<<x_end-(a[i].x+i-1)<<endl;
			a[i].x=x_end;			
		}
		if(a[i].y<y_end)
		{
			ans+=y_end-a[i].y;
//			cout<<"����"<<y_end-a[i].y<<endl;
			a[i].y=y_end;		
		}
		if(a[i].y-i+1>y_end)
		{
			ans+=a[i].y-i+1-y_end;
//			cout<<"����"<<a[i].y-i+1-y_end<<endl;
			a[i].y=y_end;		
		}
	}
	cout<<ans<<endl;
	return 0;
}
//���ⲻ long long �ᱬ ����û�뵽�� 
