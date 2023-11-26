#include<iostream>
#include<string>
using namespace std;
string str1,str2;
int len1,len2;
int ans()
{
	int res=0;
	for(int i=0;i<len2;i++)
	{
		if(str2[i]==str1[0])
		{
			string temp=str2.substr(i,len1);
			if(temp==str1) res++;
		}
	}
	return res;
}
void tolower()
{
	for(int i=0;i<len1;i++)
	{
		if(str1[i]>='A'&&str1[i]<='Z') str1[i]+='a'-'A';
	}
	for(int i=0;i<len2;i++)
	{
		if(str2[i]>='A'&&str2[i]<='Z') str2[i]+='a'-'A';
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>len1>>len2;
		cin>>str1>>str2;
		tolower();
		cout<<ans()<<endl;
	}
	return 0;
}
