#include<iostream>
using namespace std;
class demo2
{
	private:
		int a,b,c;
		public:
			demo2(int x,int y)
			{
				a=x;
				b=y;
			}
			void sum()
			{
				c=a+b;
			cout<<"result="<<c<<endl;
		}
};
int main()
{
	demo2 d(30,40);
	d.sum();
	return 0;
}