#include<iostream>
#include<cstring>
using namespace std;
int main(){
     char word[30]="apple";
     bool result=true;
           int start=0;
           int end=strlen(word)-1;
           while(start<end){
            if(word[start] != word[end]){
               result=false;
               break;
            }
            start++;
            end--;
           }
           if(result==false){
            cout<<"false";
           }else{
            cout<<"true";
           }
}
