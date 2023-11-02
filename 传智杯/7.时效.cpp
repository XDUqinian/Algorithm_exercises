#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1;
	string str2;
	cin>>str1;
	cin>>str2;
	str1=str1.substr(str1.find('.')+1,str1.length()-str1.find('.'));
	str2=str2.substr(str2.find('.')+1,str2.length()-str2.find('.'));
	if(str1==str2) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
} 
