#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int n,m;
int w[100005];
priority_queue<int,vector<int>,greater<int> >c;
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>w[i];
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		c.push(x);
	}
	sort(w,w+n);
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(w[i]>=c.top())
		{
			ans++;
			c.pop();
		}
	}
	cout<<ans<<endl;
	return 0;
}
// ��Ǯ�ٵ�������
// �ѻ���Ž�һ��С�����ÿ���ó���һ������˵ģ���������ߣ����˾�����һ���� 
