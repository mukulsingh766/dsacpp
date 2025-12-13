#include<iostream>
using namespace std;
void decreasing(int n){
 if(n==0){
        return;
 }
   cout<<n<<" ";
   decreasing(n-1);
}
int main(){
 decreasing(100);
}
// and if we want to print the no in the incresing order than we have to reverse 
//the position of cout statement and the recursion call with each other .   