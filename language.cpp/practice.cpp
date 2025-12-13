#include<iostream>
using namespace std;
int main(){
    int no;
     while(true){
        cin>>no;
        if(no%10==0){
            continue;
        }else{
        cout<<no;
    }
     }
}