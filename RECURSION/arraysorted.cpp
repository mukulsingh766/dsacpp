#include<iostream>
using namespace std;
  bool sorted(int *arr,int size,int i){
    if(i==size-1){
        return true;
    }
        if(arr[i]>arr[i+1]){
            return false;
        }
        
       return sorted(arr,size,i+1);
    }
int main(){
  int arr[5]={2,3,4,1,8};
  cout<<sorted(arr,5,0);
}