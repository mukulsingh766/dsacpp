#include<iostream>
using namespace std;
void no(){
   static int x=0;
   x=x+1;
    cout<<x;
}
int main(){
    no();
    no();

}