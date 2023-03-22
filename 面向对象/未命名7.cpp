#include<iostream>
#include<cstdio>
using namespace std;
class Dog
{
	public:
		char *name;
		int age,sex,weight;
		Dog(char* nm,int a,int s,int w)
		{
			this->name=nm;
			this->sex=s;
			this->age=a;
			this->weight=w;
		}
		void print()
		{
			printf("%s",this->name);
			cout<<" "<<this->age<<" "<<this->sex<<" "<<this->weight<<endl;
		}
};
int main()
{
	char *nm="coco";
	Dog dog(nm,1,1,2);
	dog.print();
	return 0;
}
/*
因为有的名字实在太麻烦了，想到java有个this，就试一试，结果真的可以，
this就表示这个类，这么写主要是敲代码的时候属性会自己跳出来比较方便。 
*/
