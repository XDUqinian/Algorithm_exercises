#include<iostream>
using namespace std;
class Teacher
{
	public:
		string name;
		int age;
		int sex;
		string addr;
		string phone;
		string title;
		void display();
};
class Cadre
{
	public:
		string name;
		int age;
		int sex;
		string addr;
		string phone;
		string post;
};
class Teacher_Cadre:public Teacher,public Cadre
{
	public:
		int wages;
		void show();
};
void Teacher::display()
{
	cout<<this->name<<" "<<this->age<<" "<<this->sex<<" "<<this->title<<" "<<this->addr<<" "<<this->phone<<" ";
}
void Teacher_Cadre::show()
{
	this->display();
	cout<<this->post<<" "<<this->wages<<" ";
}
int main()
{
	Teacher_Cadre a;
	cin>>a.Teacher::name>>a.Teacher::age>>a.Teacher::sex>>a.Teacher::title>>a.Teacher::addr>>a.Teacher::phone>>a.Cadre::post>>a.wages;
	a.show();
	cout<<endl;
	return 0;
}
