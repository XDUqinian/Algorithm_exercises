#include<iostream>
using namespace std;
class rec
{
	public:
		int length,width,height;
		int count()
		{
			return length*width*height;
		}
		void print()
		{
			cout<<count()<<endl;
		}
};
int main()
{
	rec a[3];
	for(int i=0;i<3;i++) cin>>a[i].length>>a[i].width>>a[i].height;
	for(int i=0;i<3;i++) a[i].print();
	return 0;
}
