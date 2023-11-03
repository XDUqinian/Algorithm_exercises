#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> a[105];
int n,k;
int main()
{
	cin>>n>>k;
	while(n--)
	{
		int t;
		cin>>t;
		if(t==1)
		{
			int p;
			cin>>p;
			while(p--)
			{
				int x,y;
				cin>>x>>y;
				a[x].push_back(y);	
			} 		
		}else if(t==2)
		{
			int x,y_min,y_max;
			cin>>x>>y_min>>y_max;
			sort(a[x].begin(),a[x].end());
			int l=0,r=a[x].size()-1;
			while(a[x][l]<y_min) l++;
			while(a[x][r]>y_max) r--;
			cout<<max(0,r-l+1)<<endl;
		}
	}
	return 0;
} 
