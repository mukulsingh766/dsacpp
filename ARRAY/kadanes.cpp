#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
        maxsum = max(maxsum, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << maxsum;
}