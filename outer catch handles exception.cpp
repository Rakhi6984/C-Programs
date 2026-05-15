#include<iostream>
using namespace std;
int main()
{
	try
	{
		try
		{
			throw 20;
		}
		catch(char c)
		{
			cout<<"inner catch";
		}
	}
	catch(int x)
	{
		cout<<"outer catch block";
		cout<<"/necxeption="<<x;
	}
	return 0;
}