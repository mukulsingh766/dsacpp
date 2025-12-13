#include<iostream>
using namespace std;
int main(){
    int n=8;
    int arr[n]={1,4,1,3,2,4,3,7};
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    // cout<<largest;
    int arr2[largest+1]={0};
    for(int i=0;i<n;i++){
        arr2[arr[i]]++;
    }
    int k=0;
    for(int i=0;i<=largest;i++){
            while(arr2[i]>0){
                arr[k]=i;
                k++;
                arr2[i]--;  
            }
        }
         for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    }
    
   

