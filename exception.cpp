#include<iostream>
using namespace std;
void display(int a,int b)
{
	try
	{
		if(b==0)
		{
			throw"divide by zero";
		}
		else
		{
		int c=a/b;
		cout<<"result"<<c;	
		}
}
catch(char p[])
{
	cout<<"caught an exception"<<p;
}
}
int main()
{
	display(10,0);
	return 0;
}