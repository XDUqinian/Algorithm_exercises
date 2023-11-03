#include<iostream>
using namespace std;
string str;
int len;
bool check(int x)
{
	string t="chuanzhi";
	for(int i=0;i<8;i++)
	{
		if(str[x+i]!=t[i]) return false;
	}
	return true;
}
int main()
{
	cin>>str;
	len=str.length();
	int cnt=0;
	for(int i=0;i<len;i++) if(str[i]=='c') if(check(i)) cnt++;
	cout<<cnt<<endl;
	return 0;
} 
