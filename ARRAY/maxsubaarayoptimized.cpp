#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n = 5;
    int maxsum = INT_MIN;

    int arr[n] = {1, 2, 3, 4, 5};
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            maxsum = max(maxsum, sum);
        }
    }
    cout << "maxsum=" << maxsum;
}