// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class circle
{
    private:
    float radius;
    const float pie=3.14;
    public:
    void getdata(float r)
    {
        radius=r;
    }
    float area()
    {
        return(pie*radius*radius);
    }
};
int main()
{
    circle c;
    c.getdata(5);
    cout<<c.area();
    return 0;
}
