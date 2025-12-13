#include<iostream>
using namespace std;
class Student{
   string name;
   int no;
   public:
   void getpercentage(){
    cout<<"percentage";
   }
   void setname(string nameval){
    name=nameval;
   }
   string getname(){
    return name;
   }
};
int main(){
  Student s1;
  s1.setname("mukul");
  cout<<s1.getname();
}