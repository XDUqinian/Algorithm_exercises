#include<iostream>
using namespace std;
class rec
{
	public:
		int a[2][3];
};
ostream& operator <<(ostream& out,rec& x)
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++) out<<x.a[i][j]<<" ";
		out<<endl;
	}
	return out;
}
istream& operator >>(istream& in,rec& x)
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++) in>>x.a[i][j];
	}
	return in;
}
int main()
{
	rec x;
	cin>>x;
	cout<<x;
	return 0;
}
/*
���������������ģ��
�������ͺ͵�һ������һ��Ҫ��&��Ϊʲô��Ҳ��֪�����������Ǳ���ġ�
>> �ڶ�����������������ΪҪ��x�޸ģ�<< �ڶ�����������������Գ�һ�㡣 
*/
