// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class student
{
    private:
    int roll_no;
    public:
    float marks;
    void getdata(int r,float m)
    {
        roll_no=r;
        marks=m;
    }
    void dispaly()
    {
    cout<<"roll no"<<roll_no<<endl;
    cout<<"marks"<<marks<<endl;
    }
};
int main()
{
student std;
std.getdata(1809,430);
std.dispaly();
return 0;
}
