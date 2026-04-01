#include<iostream>
using namespace std;
class a
{
public:
 void display()
{
	cout<<"a class function called"<<endl;
	}	
};
class b:public a
{
	public:
		void display()
		{
			cout<<"b class function called"<<endl; 
		}
};
class c:public b
{
	public:
	void display()
	{
		cout<<"c class function called"<<endl;
	}
};
int main()
{
	c cc;
	cc.display();
	cc.display();
	cc.display();
	return 0;
}