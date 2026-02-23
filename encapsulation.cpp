// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class rectangle
 {
private:
int length,breadth;
public:
void getdata(int l,int b)
{
    length=l;
    breadth=b;
}
int area()
{
    return(length*breadth);
}
};
int main()
{
    rectangle r;
    r.getdata(10,20);
    cout<<r.area();
    return 0;
}
