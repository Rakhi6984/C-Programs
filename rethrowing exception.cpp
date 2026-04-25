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
}
catch(int a)
{
	throw;
}
};
int main()
{
try
{
	display(0);
}
catch(int b)
{
	cout<<"caught an exception";
}
	return 0;
}