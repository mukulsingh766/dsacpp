#include<iostream>
using namespace std;
class Parent{
          public:
       virtual void hello(){
            cout<<"hello";
          }
};
class Child1 : public Parent{
    public:
         void hello(){
            cout<<"hello0000";
         }
};
int main(){
    Child1 c1;
    Parent *ptr;
    ptr=&c1;
    ptr->hello();// iska mtlb hai ki ptr mai 
    //jo address hai obj ka uska function call hoga this is a syntax 
    return 0;



}