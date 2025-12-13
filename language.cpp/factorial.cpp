#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"enter the no ";
 cin>>n;
 int mul=1;
 for(int i=n;i>0;i--){
    mul=mul*i;
 }
 cout<<mul;
}
