#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int arr[5]={1,1,2,2,3};
    unordered_set<int>s;
    for(int i=0;i<5;i++){
        s.insert(arr[i]);
    }
    for(auto it:s){
        cout<<it<<" ";
    }
}