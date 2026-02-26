// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Demo1
{
    private:
    float result;
    public:
    void area(int r)
    {
        result=3.14*r*r;
        cout<<"area of circle:"<<result<<endl;
    }
    void area(int l,int b)
    {
        result=l*b;
        cout<<"area of rectangle:"<<result<<endl;
    }
};
int main()
{
    Demo1 d;
    d.area(5);
    d.area(10,20);
    return 0;
}
