#include<iostream>
using namespace std;
void changes(int*arr,int n,int i){
   if(i==n){
    return;
   }
   arr[i]=i+1;
   changes(arr,n,i+1);
   arr[i] -=2;
}
int main(){
  int arr[5];
  int i=0;
  int n=5;
  changes(arr,5,i);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }
}