#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>start={1,3,0,5,8,5};
vector<int>end={2,4,6,7,9,9};
vector<int>ans={0};
 int end_time=end[0];
int n=start.size();
 for(int i=1;i<n;i++){
      if(start[i]>=end_time){
        ans.push_back(i);
        end_time=end[i];
      }
 }
 for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
 }
}