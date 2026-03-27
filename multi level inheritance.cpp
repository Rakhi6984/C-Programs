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
		class b:public a
		{
			public:
				void display_b()
				{
					display_a();
					cout<<"b class function called"<<endl;
					}
				
		};
		class c:public b
		{
			public:
				void display_c()
				{
					display_b();
					cout<<"c class function called"<<endl;
				}
		};
int main()
{
	c cc;
	cc.display_c();
	return 0;
}