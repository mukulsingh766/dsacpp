#include<iostream>
using namespace std;
int main(){
    int n=2;
    int m=3;
    int key=7;
    int count =0;
    int arr[n][m]={{4,7,8},{8,8,7}};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==key){
                count++;
            }
        }
    }
    cout<<count;
}