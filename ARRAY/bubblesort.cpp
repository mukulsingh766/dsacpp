// bubble sorrt
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {5, 4, 7, 10, 2};
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}