#include<iostream>
using namespace std;
int main()
{
	try
	{
		cout<<"inside try block";
		throw 10;
	}
	catch(int x)
	{
		cout<<"ecxeption caught:"<<x;
	}
	return 0;
}