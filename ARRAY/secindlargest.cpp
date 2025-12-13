#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int second(vector<int>& nums) {
        int maxno=INT_MIN;
       for(int i=0;i<nums.size();i++){
        maxno=max(nums[i],maxno);
       }
       int secmaxno=INT_MIN;
        for(int i=0;i<nums.size();i++){
         if(nums[i]==maxno){
            continue;
         }else{
             secmaxno=max(nums[i],secmaxno);
         }
       }
      if(secmaxno==INT_MIN){
        return -1;
      }else{
        return secmaxno;
      }
    }
int main(){
    vector<int> vec={8,8,6,5,7};
   int ans= second(vec);
   cout<<ans;
}