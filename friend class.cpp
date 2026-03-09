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
			friend class demo2;
};
class demo2
{
	private:
		int z;
		public:
			void sum(demo1 &aa)
			{
				int z=aa.x+aa.y;
				cout<<"result="<<z<<endl;
			}
};
int main()
{
	demo1 pp;
	pp.getdata();
	demo2 bb;
	bb.sum(pp);
	return 0;
}