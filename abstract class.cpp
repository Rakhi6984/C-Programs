#include<iostream>
using namespace std;
class a
{
	public:
		virtual void sumdata();
		virtual void multidata();
};
class b:public a
{
	public:
		void sumdata()
		{
			cout<<"b class sumdata function"<<endl;
		}
		void multidata()
		{
			cout<<"c class multidata function"<<endl;
		}
};
class c:public a
{
	public:
		void sumdata()
		{
			cout<<"c class sumdata function"<<endl;
		}
		void multidata()
		{
			cout<<"c class multidata function"<<endl;
		}
};
int main()
{
	b bb;
	c cc;
	bb.sumdata();
	bb.multidata();
	cc.sumdata();
	cc.multidata();
	return 0;
}