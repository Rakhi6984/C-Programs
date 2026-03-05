// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class demo
{
    private:
    static int p;
    public:
    static void sum(int m,int n)
    {
        p=m+n;
        cout<<"result="<<p;
    }
};
int demo::p;
int main()
{
    demo::sum(10,20);
    return 0;
}
