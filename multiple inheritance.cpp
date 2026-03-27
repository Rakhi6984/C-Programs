#include<iostream>
using namespace std;
class a
{
	public:
		void display_a()
		{
			cout<<"a class function called"<<endl;
		}
};
		class b
		{
			public:
				void display_b()
				{
					cout<<"b class function called"<<endl;
					}
				
		};
		class c:public a,public b
		{
			public:
				void display_c()
				{
					display_a();
					display_b();
					cout<<"c class function called"<<endl;
				}
		};
int main()
{
	c cc;
	cc.display();
	return 0;
}