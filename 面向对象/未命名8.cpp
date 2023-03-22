#include<iostream>
#include<cstdio>
using namespace std;
class Account
{
	public:
		static int cnt;
		static double p;
		string name,psw;
		int id;
		double val;
		Account(string nm,string password)
		{
			this->name=nm;
			this->psw=password;
			this->id=this->cnt;
			cnt++;
			this->val=0;
		}
		void print()
		{
			cout<<this->name<<" "<<this->id<<" "<<this->val<<endl; 
		}
		void insert(double money)
		{
			this->val+=money;
		}
		void get(double m)
		{
			if(m>this->val) cout<<"error"<<endl;
			else
			{
				this->val-=m;
			}
		}
		void count()
		{
			cout<<this->val*this->p<<endl;
		}
};
int Account::cnt=0;
double Account::p=0.01;
int main()
{
	Account a("coco","123456");
	a.print();
	a.insert(1000);
	a.print();
	a.get(10000);
	a.get(500);
	a.print();
	a.count();
	Account b("Lisa","123456");
	b.print();
	return 0;
}
