#include <iostream>
using namespace std;
class Date
{
	public:
		int y,m,d;
		void read()
		{
			cin>>y>>m>>d; 
		}
		void print();
};
void Date::print()
{
	cout<<y<<" "<<m<<" "<<d<<endl;
}
int main()
{
	Date x;
	x.read();
	x.print();
	return 0;
}
