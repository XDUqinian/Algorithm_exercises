#include<iostream>
#include<string>
#include<sstream>
#include<cstdio>

using namespace std;

#define ll long long

const ll K=1024;
const ll M=1024*1024;
const ll G=1024*1024*1024; 

ll toB(ll num,string str)
{
	if(str=="B") return num;
	if(str=="KB") return num*K;
	if(str=="MB") return num*M;
	if(str=="GB") return num*G;
}
double b2ans(ll num,string str)
{
	if(str=="B") return 1.0*num;
	if(str=="KB") return (1.0*num)/K;
	if(str=="MB") return (1.0*num)/M;
	if(str=="GB") return (1.0*num)/G;
}
int main()
{
	string str;
	cin>>str;
	int len=str.length();
	int p1=str.find('?');
	int p2=p1;
	while(!(str[p2]>='0'&&str[p2]<='9')) p2--;
	string str2=str.substr(p1+1,len-p1);
	string str1=str.substr(p2+1,p1-2-p2);
	string str0=str.substr(0,p2+1);
//	cout<<str0<<" "<<str1<<" "<<str2<<endl;
	ll num;
	stringstream ss(str0);
	ss>>num;
	num=toB(num,str1);
//	cout<<num<<endl;
	printf("%.6lf\n",b2ans(num,str2));
	return 0;
}
