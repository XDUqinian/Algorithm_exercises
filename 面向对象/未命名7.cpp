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
��Ϊ�е�����ʵ��̫�鷳�ˣ��뵽java�и�this������һ�ԣ������Ŀ��ԣ�
this�ͱ�ʾ����࣬��ôд��Ҫ���ô����ʱ�����Ի��Լ��������ȽϷ��㡣 
*/
