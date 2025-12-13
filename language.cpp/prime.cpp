#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no";
    cin>>n;
    bool result=true;
     for(int i=2;i<n;i++){
        if(n%i==0){
            result=false;
        }
     }
     if(result){
        cout<<"it is a prime no";
     }else{
        cout<<"it is not a prime";
     }
}