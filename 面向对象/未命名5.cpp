#include<iostream>
using namespace std;
class People
{
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
	return 0;
}
