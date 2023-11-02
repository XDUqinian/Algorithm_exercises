#include<iostream>
using namespace std;
int a[105];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
				for(int k=j;k<n;k++)
				{
					if(a[k]==a[i]+a[j]) cnt++;
				}
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
