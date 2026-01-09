#include<iostream>
using namespace std;
int main(){
    int n=5;
 int arr[n]={3,1,4,5,2};
 for(int i=1;i<n;i++){
    int extra=arr[i];
    int j;
      for( j=i-1;j>=0;j--){
         if(arr[j]>extra){
            arr[j+1]=arr[j];
         }else{
            break;
         }
        
      }
       arr[j+1]=extra;
 }
 for(int i=0;i<n;i++){
   cout<<arr[i];
 }


}