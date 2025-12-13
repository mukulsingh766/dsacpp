#include <iostream>
using namespace std;

int friendsPairing(int n) {
    // Base cases
    if (n == 1 || n == 2) {
        return n;
    }

    // Recursive relation:
    // 1. Single → f(n-1)
    // 2. Pair → (n-1) * f(n-2)
    return friendsPairing(n - 1) + (n - 1) * friendsPairing(n - 2);
}

int main() {
    cout << friendsPairing(4) << endl; // Output: 4 ways
    return 0;
}
