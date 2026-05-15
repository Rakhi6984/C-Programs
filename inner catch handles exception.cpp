#include<iostream>
using namespace std;
int main()
{
	try
	{
		try
		{
			throw 10;
		}
		catch(int x)
		{
			cout<<"inner catch block";
			cout<<"exception="<<x;
		}
	}
	catch(...)
	{
		cout<<"outer catch block";
	}
	return 0;
}