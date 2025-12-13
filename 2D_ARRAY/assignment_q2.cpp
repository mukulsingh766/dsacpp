#include<iostream>
using namespace std;
int main(){
   int arr[3][3]={{1,4,9},{11,4,3},{2,2,3}};
   int sum=0;
   for(int i=0;i<3;i++){
    sum=sum+arr[1][i];
   }
   cout<<sum;
}