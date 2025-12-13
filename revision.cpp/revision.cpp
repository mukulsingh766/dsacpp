#include<iostream>
using namespace std;
int partition(int*arr,int si,int end){
    int pivot=arr[end];
    int i=si-1;
    for(int j=si;j<end;j++){
        if(arr[j]<pivot){
            swap(arr[i+1],arr[j]);
            i++;
        }
        
    }
    swap(arr[i+1],arr[end]);
        return i+1;
}
void quick(int arr[],int si,int end){
   if(si>=end){ 
    return;
   }
    
    int pi=partition(arr,si,end);
    quick(arr,si,pi-1);
    quick(arr,pi+1,end);
}
int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;
       quick(arr,0,n-1);
       for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
       }
}