#include<iostream>
using namespace std;
class Student {
public;
      int id;
      string name;
      string branch;
      string address;
void getDetails() {
   cout<<id<<endl;
   cout<<name<<endl;
   cout<<branch<<endl;
   cout<<address<<endl;
    }
};
int main() {
  Student stul;
cout<<"Enter the name"<<endl;
cin>>stul.name;
cout<<"Enter the id"<<endl;
cin>>stul.id;
cout<<"Enter the branch"<<endl;
cin>>stul.branch;
cout<<"Enter the address"<<endl;
cin>>stul.address;
stul.getDetails();
return 0;
}
