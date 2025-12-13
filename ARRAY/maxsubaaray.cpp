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
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                cout << arr[k];
                sum = sum + arr[k];
            }
            maxsum = max(maxsum, sum);
            cout << ",";
        }
        cout << endl;
    }
    cout << "maxsum=" << maxsum;
} // and in optimized solution we not do such a great change we have to only remove the third loop and
// do some modification