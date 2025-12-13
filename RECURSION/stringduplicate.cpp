#include<iostream>
using namespace std;
void dup(string str,string ans,int map[26],int i){
    if(i==str.size()){
        cout<<ans;
        return ;
    }
    char st=str[i];
    int pos=st-'a';
    if(map[pos]==false){
        map[pos]=true;
        dup(str,ans+st,map,i+1);
    }else{
        dup(str,ans,map,i+1);
    }
}
int main(){
   string str="sshhoobbhhiitt";
   string ans="";
   int map[26]={false};
   dup(str,ans,map,0);
}