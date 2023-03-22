#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
class Student
{
	private:
		char name[18];
		int num,mathSource,englishSource;
		static int count,mathTotalSource,englishTotalSource;
	public:	
		Student(char nm[],int nu,int math,int english)
		{
			num=nu;
			mathSource=math;
			englishSource=english;
			count++;
			mathTotalSource+=math;
			englishTotalSource+=english;
			int len=strlen(nm);
			for(int i=0;i<len;i++) name[i]=nm[i];
			name[len]='\0';
		}
		void ShowBase()
		{
			printf("%s",name);
			cout<<" "<<num<<" "<<mathSource<<" "<<englishSource<<endl;
		}
		static void ShowStatic()
		{
			cout<<count<<" "<<mathTotalSource<<" "<<englishTotalSource<<endl;
		}
};
int Student::count=0;
int Student::englishTotalSource=0;
int Student::mathTotalSource=0;
int main()
{
	char name[18];
	scanf("%s",name);
	Student a(name,1,1,1);
	a.ShowBase();
	a.ShowStatic();
	scanf("%s",name);
	Student b(name,2,1,1);
	b.ShowBase();
	a.ShowStatic();
	return 0;
}
