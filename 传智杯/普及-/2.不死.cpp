#include<iostream>
#include<algorithm>
using namespace std;
int n,m;
int a[100005];
int d[105];
int cost=0;
void insert(int x,int id,int d)
{
	if(id==0) id=d;
	int p=id;
	for(int i=x-d;i>=id;i-=d)
	{
		if(a[i]>a[x]) continue;
		p=i+d;
		break;
	}
	int temp=a[x];
	for(int i=x;i>=p+d;i-=d) a[i]=a[i-d];
	a[p]=temp;
	cost+=(x/d-p/d)+1;
	
//	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
//	cout<<endl;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=m;i++) cin>>d[i];
	for(int i=1;i<=m;i++) for(int j=1;j<=n;j++) insert(j,j%d[i],d[i]);
	cout<<cost<<endl;
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
// 从前往后找会TLE
// 因为希尔排序后，基本可以实现后面比前面大，所以从后往前找比较快 
