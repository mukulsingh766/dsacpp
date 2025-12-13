#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n = 7;
    int height[n] = {4, 2, 0, 6, 3, 2, 5};
    int leftHeight[20000];
    int rightHeight[20000];
    leftHeight[0] = height[0];
    rightHeight[n - 1] = height[n - 1];
    for (int i = 1; i < n; i++)
    {
        leftHeight[i] = max(height[i - 1], leftHeight[i - 1]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        rightHeight[i] = max(height[i + 1], rightHeight[i + 1]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int profit = min(leftHeight[i], rightHeight[i]) - height[i];
        if (profit > 0)
        {
            sum = sum + profit;
        }
    }
    cout << sum;
}