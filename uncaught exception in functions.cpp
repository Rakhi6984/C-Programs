#include<iostream>
using namespace std;
void test()
{
	throw 100;
}
int main()
{
	test();
	return 0;
}
