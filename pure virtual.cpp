#include<iostream>
using namespace std;
class demo1
{
	public:
		virtual void display()=0;
};
class demo2:public demo1
{
	public:
	void display()
	{
		cout<<"demo2 class function called"<<endl;
	}
};
class demo3:public demo2
{
	public:
	void display()
	{
		cout<<"demo3 class function called"<<endl;
	}
};
int main()
{
	demo2 d;
	d.display();
	demo3 dd;
	dd.display();
	return 0;
}