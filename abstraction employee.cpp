// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class employee
{
    private:
    int code;
    public:
    string name;
    void getdata(int c,string n)
    {
        code=c;
        name=n;
    }
    void dispaly()
    {
    cout<<"code:"<<code<<endl;
    cout<<"name:"<<name<<endl;
    }
};
int main()
{
employee emp;;
emp.getdata(1841,"Rakhi");
emp.dispaly();
return 0;
}
