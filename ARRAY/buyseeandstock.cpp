#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n = 6;
    int prices[n] = {7, 1, 5, 3, 6, 4};
    int bestbuy[n];
    bestbuy[0] = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        bestbuy[i] = min(prices[i - 1], bestbuy[i - 1]);
    }
    int maxprofit = 0;
    for (int i = 1; i < n; i++)
    {
        int profit = prices[i] - bestbuy[i];
        maxprofit = max(maxprofit, profit);
    }
    cout << maxprofit;
}