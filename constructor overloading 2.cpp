#include<iostream>
using namespace std;
class demo
{
	private:
		int c;
		public:
			demo(int a):c(a)
			{
				c=a;
			}
			demo(int a,int b,int d):c(a+b+d)
			{
				c=a+b+d;
			}
			void display()
			{
				cout<<"result="<<c<<endl;
			}
};
int main()
{
	demo d(5);
	d.display();
	d=demo(10,20,40);
	d.display();
	return 0;
}