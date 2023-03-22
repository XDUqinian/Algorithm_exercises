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
重载流插入运算符模板
返回类型和第一个参数一定要加&，为什么我也不知道，但是这是必须的。
>> 第二个参数加引用是因为要对x修改，<< 第二个参数加引用是想对称一点。 
*/
