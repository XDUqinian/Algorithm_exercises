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
//��λdp �������� 
//f[i][l] ��ʾѡ����i������ģk��l�ķ�����
//�� f[i][l] �ٶ�һö���ӣ��õ�һ���� j��״̬ת��Ϊf[i+1][(l*10+j)%k]
//��� f[i+1][(l*10+j)%k]��һ���ַ�������f[i][l]���� 
