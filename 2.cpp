//Swapping two numbers
#include<iostream>
using namespace std;
int main()
{
  int a,b;
cout<<"Enter two numbers: ";
cin>>a;
cin>>b;
cout<<"a= "<<a<<endl;
cout<<"b= "<<b<<endl;
int t=a;
a=b;
b=t;
cout<<"After swapping"<<endl;
cout<<"a= "<<a<<endl;
cout<<"b= "<<b<<endl;
return 0;
}
