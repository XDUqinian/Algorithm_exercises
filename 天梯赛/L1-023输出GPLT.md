计数器计数，如果存在计数器非零（用加法表示）就输出。

```c++
#include<iostream>
using namespace std;
int main()
{
	int g=0;
	int p=0;
	int l=0;
	int t=0;
	string str;
	cin>>str;
	int len=str.length();
	for(int i=0;i<len;i++)
	{
		if(str[i]=='g'||str[i]=='G') g++;
		else if(str[i]=='p'||str[i]=='P') p++;
		else if(str[i]=='l'||str[i]=='L') l++;
		else if(str[i]=='t'||str[i]=='T') t++;
	}
	while(g+p+l+t!=0)
	{
		if(g>0)
		{
			cout<<'G';
			g--;
		}
		if(p>0)
		{
			cout<<'P';
			p--;
		}
		if(l>0)
		{
			cout<<'L';
			l--;
		}
		if(t>0)
		{
			cout<<'T';
			t--;
		}
	}
	cout<<endl;
	return 0;
} 
```

