// selection sort
#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int arr[n] = {5, 4, 2, 3, 8, 10};

    for (int i = 0; i < n - 1; i++)
    {
        int smallest = arr[i];
        int smallIndex = i;   // <-- yeh add kiya

        for (int j = i; j < n; j++)
        {
            if (arr[j] < smallest)
            {
                smallest = arr[j];
                smallIndex = j; // <-- yaha index store karo
            }
        }

        // ab sahi swap
        swap(arr[i], arr[smallIndex]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
