#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the no of row and column in sequance ";
    cin>>n>>m;
    int spiral[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>spiral[i][j];
        }
    }
    int rowstart=0; 
    int rowend=n-1;
    int columnstart=0;
    int columnend=m-1;
    while(rowstart<=rowend && columnstart<=columnend){
    for(int i=columnstart;i<=columnend;i++){
        cout<<spiral[rowstart][i];
    }
    for(int j=rowstart+1;j<=rowend;j++){
        cout<<spiral[j][columnend];
    }
    for(int i=columnend-1;i>=columnstart;i--){
        if(rowstart==rowend){
            break;  
        }
        cout<<spiral[rowend][i];
    }
    for(int j=rowend-1;j>rowstart;j--){
         if(columnstart==columnend){
            break;  
        }
        cout<<spiral[j][columnstart];
    }
    rowstart++;
    rowend--;
    columnstart++;
    columnend--;
    }
}