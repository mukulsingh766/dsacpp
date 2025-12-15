#include <iostream>
#include<vector>
using namespace std;
void conquer(int *arr,int si,int mid,int end){
    vector<int> vec;
    int i=si;
    int j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            vec.push_back(arr[i++]);
        }else{
            vec.push_back(arr[j++]);
        }}                  
            while(i<=mid){
vec.push_back(arr[i++]);
            }
            while(j<=end){
vec.push_back(arr[j++]);
            }
    
    for(int idx=si,x=0;idx<=end;idx++){
        arr[idx]=vec[x++];
    }
}
void merge(int *arr,int si,int end){
    if(si>=end){
        return;
    }
    int mid=si+(end-si)/2;
    merge(arr,si,mid);//for left part
    merge(arr,mid+1,end);//for right part 
    conquer(arr,si,mid,end);

}
int main(){
    int arr[6]={6,3,7,5,2,4};
    int n=6;
    merge(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}