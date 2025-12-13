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

    int key;
    cout << "enter the key to search: ";
    cin >> key;

    bool found = false;

    // binary search on every row
    for(int i = 0; i < n; i++){
        int start = 0;
        int end = m - 1;

        while(start <= end){
            int mid = (start + end) / 2;

            if(matrix[i][mid] == key){
                cout << "Key found at: " << i << ", " << mid << endl;
                found = true;
                break;   // stop binary search for this row
            }
            else if(matrix[i][mid] > key){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }

        if(found) break; // stop searching other rows
    }

    if(!found){
        cout << "Key not found";
    }

    return 0;
}
