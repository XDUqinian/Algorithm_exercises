#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		if(x==1&&y==2) cout<<"Yes"<<endl;
		else if(x==2&&y==1) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
// ɵ����
// ����ֻ�� 2 �� 3�����Ϊ1
// ��Ϊ����2�����������������������������������λһ���� 0����˸�������������һ��Ҫ��2
// ���ܺ�2������1��������ֻ��3 
