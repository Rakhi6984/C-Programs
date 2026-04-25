#include<iostream>
using namespace std;
void display(int n)
{
	try
	{
		if(n==0)
		{
			throw 10;
		}
		else
		{
		throw"error";	
		}
}
catch(int a)
{
	cout<<"caught an integer exception";
}
catch(char b[])
{
	cout<<"caught an exception";
}
};
int main()
{
	display(0);
	return 0;
}