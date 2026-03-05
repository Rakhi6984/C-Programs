// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class demo
{
    private:
    int a,b,c;
    public:
    void sum()
    {
        a=10;
        b=20;
        c=a+b;
        cout<<"result="<<c<<endl;
    }
};
void display()
{
    demo d;
    d.sum();
}
int main()
{
    display();
    return 0;
}
