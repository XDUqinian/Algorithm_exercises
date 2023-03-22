#include<iostream>
using namespace std;
class People
{
	private: 
	static int num;
	protected:
		int age,height,weight;
	public:
		People(int a,int h,int w)
		{
			age=a;
			height=h;
			weight=w;
			num++;
		}
		void Eating(){weight++;}
		void Sporting(){height++;}
		void Sleeping(){age++;weight++;height++;}
		void Show(){cout<<age<<" "<<height<<" "<<weight<<endl;}
		static void ShowNum(){cout<<num<<endl;}
};
int People::num=0;
int main()
{
	People a(1,2,3);
	a.Show();
	a.ShowNum();
	People b(2,2,2);
	b.Show();
	a.ShowNum();
	return 0;
}
/*
静态成员要类内声明，类外定义。
静态成员是同类对象所共享的成员。 
我感觉设成private比较合适，但是没要求的话都行，public方便一点。 
*/
