// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class student {
    private:
    int roll_no;
    char name[20];
    float marks;
    public:
    void getdata()
    {
        cout<<"enter student roll-no";
        cin>>roll_no;
        cout<<"enter studnet name";
        cin>>name;
        cout<<"enter student marks";
        cin>>marks;
    }
    void display()
    {
        cout<<"student roll-no:"<<roll_no<<endl;
        cout<<"student name:"<<name<<endl;
        cout<<"student marks:"<<marks<<endl;
    }
};
int main()
{
    student std;
    std.getdata();
    std.display();
    return 0;
}
