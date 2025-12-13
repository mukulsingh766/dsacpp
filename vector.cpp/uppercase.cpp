#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char arr[30];
    cout << "enter the string: ";
    cin.getline(arr, 30);

    int len = strlen(arr);

    for(int i = 0; i < len; i++) {
        if(arr[i] >= 'a' && arr[i] <= 'z') {
            int position = arr[i] - 'a';
            char word = 'A' + position;
            arr[i] = word;
        }
    }

    for(int i=0;i<len;i++){
        cout<<arr[i]<<endl;
    }
}
