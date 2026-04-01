#include<iostream>
using namespace std;
class a
{
public:
  virtual void display()
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
	a*object;
	c cc;
	object=&cc;
	object->display();
	b bb;
	object=&bb;
	object->display();
	a aa;
	object->display();
	return 0;
}