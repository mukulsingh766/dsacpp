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
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                sum=sum+spiral[i][j];
                
            }else if(i+j==n-1){
                sum=sum+spiral[i][j];

            }
        }
    }
    cout<<sum;
}