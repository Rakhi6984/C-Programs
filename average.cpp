// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
int math,english,hindi,physics,cs;
int total;
float average;
cout<<"enter the marks for math,english,hindi,physics,cs:";
cin>>math>>english>>hindi>>physics>>cs;
total=math+english+hindi+physics+cs;
average=total/5.0;
cout<<"total marks="<<total<<endl;
cout<<"average marks="<<average<<endl;
 return 0;
}
