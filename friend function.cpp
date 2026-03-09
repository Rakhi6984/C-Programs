#include<iostream>
using namespace std;
class demo1
{
	private:
		int x,y;
		public:
			void getdata()
			{
				x=10;
				y=20;
			}
			friend void sum(demo1 &aa);
};
void sum(demo1 &aa)
{
	int z=aa.x+aa.y;
	cout<<"result="<<z<<endl;
}
int main()
{
	demo1 pp;
	pp.getdata();
	sum(pp);
	return 0;
}