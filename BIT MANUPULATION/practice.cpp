#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={
        4,5,1,2,6
    };
 for(int i=0;i<n-1;i++){
    int minno=arr[i];
         for(int j=i;j<=n-1;j++){
                  if(arr[j]<minno){
                    minno=arr[j];
                  }
                  arr[i]=minno;
         }
 }
 for(int i=0;i<n;i++)
 {
    cout<<arr[i];
 }
}