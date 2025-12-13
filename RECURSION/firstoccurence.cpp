#include<iostream>
#include<vector>
using namespace std;
int occurence(vector<int>arr,int target,int i){
    int n=arr.size();
    if(i==n){
        return -1;
    }
    if(arr[i]==target){
        return i;
    }
    return occurence(arr, target,i+1);
}   
int main(){
 vector<int> arr={5,4,3,3,7};
 cout<<occurence(arr,3,0);
}