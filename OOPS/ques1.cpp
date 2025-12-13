#include<iostream>
using namespace std;
class Animal{
 string name;
 public:
 string gender;
 int size;
 void who(){
    cout<<"who im";
 }
};
class Beta:protected Animal{
    string father;
    public:
    void ans()
    {
        cout<<gender;
    }
};
int main(){
    Beta b1;
    Animal a1;
    a1.gender="male";
    b1.ans();
}