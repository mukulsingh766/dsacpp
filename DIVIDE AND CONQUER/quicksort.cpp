#include<iostream>
using namespace std;
int partitio(int *arr,int si,int end){
            int i=si-1;
            int last=arr[end];
            for(int j=si;j<end;j++){
              
            if(arr[j]<=last){
                i++;
                swap(arr[j],arr[i]);
            }
            }
            i++;
            swap(arr[i],arr[end]);
            return i;
}
void quick(int*arr,int si,int end){
    if(si>=end){
        return;  
    }
    int pivot=arr[end];
   int idx= partitio(arr,si,end);
    quick(arr,si,idx-1);
    quick(arr,idx+1,end);
}
int main(){
  int arr[6]={6,3,7,5,2,4};
  int n=6;
  quick(arr,0,n-1);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" "; 
  }
}