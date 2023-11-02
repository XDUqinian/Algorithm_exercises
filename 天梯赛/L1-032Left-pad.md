如果输入的字符不够长，则用给定的字符填充。

如果够长，就截断。str.substr(pos,len)

写这题题解是因为 cin.ignore()

```c++
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int l;
	char ch;
	cin>>l;
	cin>>ch;
	cin.ignore();
	string str;
	getline(cin,str);
	int len=str.length();
	int cnt=l-len;
	if(cnt>=0)
	{
		for(int i=0;i<cnt;i++) cout<<ch;
		cout<<str<<endl;
		return 0;
	}
	else
	{
		str=str.substr(len-l,l);
		cout<<str<<endl;
		return 0;
	}
}
```

