#include<iostream>
using namespace std;

int main() {
    int n, m;
    cout << "enter the no of rows and columns: ";
    cin >> n >> m;

    int matrix[n][m];

    // input array
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    bool result=false;
    int key =20;
    int i=0;
    int j=m-1;
      
    while(j>=0 && i<n){
        int no=matrix[i][j];
        if(no==key){
            result=true;
            break;
        
        }else if(no>key){
                    j--;
        } else{
            i++;
        }
    }
    cout<<result;
}