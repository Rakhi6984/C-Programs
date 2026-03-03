// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void swap(int&x,int&y);
int main() {
    int a,b;
    cout<<"enter two numbers";
    cin>>a>>b;
    swap(a,b);
    cout<<"after function call"<<a<<" "<<b;
    return 0;
}
void swap(int&x,int&y)
{
    int z;
    z=x;
    x=y;
    y=z;
    cout<<"inside function"<<x<<" "<<y<<endl;
}
