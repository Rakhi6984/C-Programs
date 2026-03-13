#include<iostream>
using namespace std;
class item
{
	private:
		static int count;
		public:
			void getdata()
			{
				count=count+1;
			}
			void display()
			{
				cout<<"count"<<endl;
			}
};
int item::count;
int main()
{
	item pp1,pp2,pp3;
	pp1.display();
	pp2.display();
	pp3.display();
	
	pp1.getdata();
	pp2.getdata();
	pp3.getdata();
	pp1.display();
	pp2.display();
	pp3.display();
	return 0;
}