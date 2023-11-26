#include<iostream>
#include<algorithm>
using namespace std;
int n,m;
int a[3][55];
int now,cnt,ok;
bool check(int x)
{
	for(int i=1;i<=50;i++) if(a[x][i]>0) return false;
	return true;
}
int win()
{
	for(int i=0;i<3;i++) if(check(i)) return i;
	return -1;
}
void move(int x)
{
	for(int i=now+1;i<=50;i++)
	{
		if(cnt==0) break;
		if(a[x][i]>=cnt)
		{
			a[x][i]-=cnt;
			now=i;
			ok=0;
			return;
		}
	}
	for(int i=1;i<=50;i++)
	{
		if(a[x][i]<cnt) continue;
		
		if(a[x][i]>cnt)
		{
			cnt++;
			a[x][i]-=cnt;
			now=i;
			ok=0;
			return;
		}
	}
	ok++;
	if(ok==2)
	{
		now=0;
		cnt=0;
	}
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<n;j++)
		{
			int x;
			cin>>x;
			a[i][x]++;
		}
	}
//	cout<<"ok"<<endl; 
	int id=0;
	while(win()==-1)
	{
		move(id);
//		if(ok>0) cout<<id+1<<":出不起"<<endl; 
//		else cout<<id+1<<":"<<cnt<<"张"<<now<<endl;
		id++;
		id%=3;
	}
	cout<<win()+1<<endl;
	return 0;
}
