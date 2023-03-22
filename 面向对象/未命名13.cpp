#include<iostream>
using namespace std;
class Person
{
	public:
		int id;
		string name;
		void print()
		{
			cout<<id<<" "<<name<<endl;
		}
		void insert()
		{
			cin>>id>>name;
		}
};
class Student:public Person
{
	public:
		int classid,val;
		void insert()
		{
			cin>>id>>name>>classid>>val;
		}
};
class Teacher:public Person
{
	public:
		string work;
		string where;
		void insert()
		{
			cin>>id>>name>>work>>where;
		}
};
int main()
{
	Student s;
	Teacher t;
	s.insert();
	s.print();
	t.insert();
	t.print();
}
