#include<iostream>
#include<algorithm>
using namespace std;
template <typename T>
void Sort(T &a,int cnt)
{
	sort(a,a+cnt);
}
int main()
{
	int n=0;
	int a[10];
	int x;
	while(cin>>x)
	{
		a[n++]=x;
	}
	Sort(a,n);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
