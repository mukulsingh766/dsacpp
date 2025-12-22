#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void maxspan(vector<int>& arr, vector<int>& span){
    stack<int> s;

    span[0] = 1;
    s.push(0);

    int i = 1;
    while(i < arr.size()){
        int currprice = arr[i];

        while(!s.empty() && currprice >= arr[s.top()]){
            s.pop();
        }

        if(s.empty()){
            span[i] = i + 1;
        }
        else{
            span[i] = i - s.top();
        }

        s.push(i);   // ⭐ VERY IMPORTANT
        i++;
    }
}

int main(){
    vector<int> arr = {100,80,60,70,60,85,100};
    vector<int> span(7,0);

    maxspan(arr, span);

    for(int i = 0; i < span.size(); i++){
        cout << span[i] << " ";
    }
}
