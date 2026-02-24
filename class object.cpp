// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class employee {
    private:
    int code;
    char name[20];
    float salary;
    public:
    void getdata()
    {
        cout<<"enter employee code";
        cin>>code;
        cout<<"enter employee name";
        cin>>name;
        cout<<"enter employee salary";
        cin>>salary;
    }
    void display()
    {
        cout<<"employee code:"<<code<<endl;
        cout<<"employee name:"<<name<<endl;
        cout<<"employee salary:"<<salary<<endl;
    }
};
int main()
{
    employee emp;
    emp.getdata();
    emp.display();
    return 0;
}
