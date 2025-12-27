#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int,int>p1,pair<int,int>p2){
    return p1.first<p2.first;
}
int main(){
    vector<pair<int,int>>mukul(3,make_pair(0,0));
    mukul[0]=make_pair(3,6);
    mukul[1]=make_pair(11,7);
    mukul[2]=make_pair(12,8);
    sort(mukul.begin(),mukul.end(),compare);
      for(int i=0;i<mukul.size();i++){
        cout<<mukul[i].first<<" "<<mukul[i].second<<endl;
      }
}