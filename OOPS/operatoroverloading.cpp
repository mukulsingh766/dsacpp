#include<iostream>
using namespace std;
class Complex{
    public:
   int real;
   int img;

   Complex(int r,int i){
    real=r;
    img=i;
   }
   void showno(){
    cout<<real<<"+"<<img<<"i\n";
   }
   void operator +(Complex &c2){
     /* ab ismai jab bhi hum c1+c2 ya kuch aur karenge
     c1 pehla obj ho jayega aur c2 as a argu
     */ 
    int realres= this->real+c2.real;
     int imgres= this->img+c2.img;
     Complex c3(realres,imgres);
     cout<<"result";
     c3.showno();

   }
};  
int main(){
   Complex c1(2,4);
   Complex c2(6,3);
   c1.showno();
   c2.showno();
   c1+c2;
}