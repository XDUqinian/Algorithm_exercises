#include<iostream>
using namespace std;
#define ll long long
int n,k;
ll f[15][1005];
int main()
{
	cin>>n>>k;
	f[0][0]=1;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=6;j++)
		{
			for(int l=0;l<k;l++)
			{
				f[i][(l*10+j)%k]+=f[i-1][l];
			}
		}
	}
	cout<<f[n][0]<<endl;
	return 0;
}
//数位dp 见洛谷题解 
//f[i][l] 表示选到第i个数，模k余l的方法数
//对 f[i][l] 再丢一枚骰子，得到一个数 j，状态转移为f[i+1][(l*10+j)%k]
//因此 f[i+1][(l*10+j)%k]有一部分方案数由f[i][l]贡献 
