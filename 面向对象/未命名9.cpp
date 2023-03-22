#include<iostream>
#include<algorithm>
using namespace std;
class Student
{
	public:
		string id;
		int val;
		
		void print()
		{
			cout<<this->id<<" "<<this->val<<endl;
		}
};
bool operator <(Student x,Student y)
{
	return x.val>y.val;
}
int main()
{
	Student a[5];
	for(int i=0;i<5;i++) cin>>a[i].id>>a[i].val;
	Student* p=&a[0];
	p->print();
	p=p+2;
	p->print();
	p=p+2;
	p->print();
	sort(a,a+5);
	a[0].print();
	return 0;
}
