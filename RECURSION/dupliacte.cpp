#include<iostream>
#include<cstring>
using namespace std;
void dup(string str,string &ans,int arr[26],int i){
if(i==str.length()){
    return;
}

int position=str[i]-'a';
if(arr[position]==false){
    arr[position]=true;
    ans.push_back(str[i]);
}
    dup(str,ans,arr,i+1);

}
int main(){
   string str="mmuukul";
   string ans="";
   int arr[26]={false};
   int i=0;
   dup(str,ans,arr,i);
   cout<<ans;
}