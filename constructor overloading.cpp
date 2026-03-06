#include<iostream>
using namespace std;
class demo
{
	private:
		int c;
		public:
			demo(int a)
			{
				c=a;
			}
			demo(int a,int b)
			{
				c=a+b;
			}
			void display()
			{
				cout<<c<<endl;
			}
};


int main()
{
demo d(5);
d.display();
d=demo(10,20);
d.display();
return 0;
}
