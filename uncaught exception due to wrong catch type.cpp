#include<iostream>
using namespace std;
int main()
{
	try
	{
		throw 5.5;
	}
	catch(int x)
	{
		cout<<"integer exception";
	}
	return 0;
}