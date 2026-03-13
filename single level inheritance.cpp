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
int main()
{
	b bb;
	bb.display_b();
	return 0;
}