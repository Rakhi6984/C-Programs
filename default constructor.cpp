// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class demo1
{
    private:
    int a,b,c;
    public:
    demo1()//default constructor
    {
        a=10;
        b=20;
    }
    void sum()
    {
        c=a+b;
        cout<<"result="<<c<<endl;
    }
};
int main()
{
    demo1 d;
    d.sum();//called to constructor
    return 0;
}
