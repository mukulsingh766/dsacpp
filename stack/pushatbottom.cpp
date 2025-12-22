#include<iostream>
#include<stack>
using namespace std;
void pushatbottom(stack<int>&s,int value){
    if(s.empty()){
        s.push(value);
        return;
    }
    int temp=s.top();
    s.pop();
    pushatbottom(s,value);
    s.push(temp);
     

}
int main(){
 stack<int> s;
 s.push(1);
 s.push(2);
 s.push(3);
 pushatbottom(s,26);
 while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
 }
}