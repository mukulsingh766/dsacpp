#include<iostream>
#include<vector>
using namespace std;
template<class T>
class Stack{
    public:
     vector<T>arr={1,2,3};
     void push(T val){
            arr.push_back(val);
     }
     void pop(){
           arr.pop_back();
     }
     bool isempty(){
       return arr.size()==0; .//ek back()bhi hota hai usese vector ka last elemt aa jaaat hai
       
     }
     int top(){
           return arr.size()-1;
     }
     void print(){
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
     }
};
int main(){
    Stack<int> s;
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.pop();

    s.print();
    int ans=s.isempty();
    cout<<ans;
}