#include <bits/stdc++.h>
using namespace std;

int main() {
    long long dollars;
    cin >> dollars;

    int result = 0;
    int bills[] = {100, 20, 10, 5, 1}; // largest to smallest

    for (int bill : bills) {
        result += dollars / bill;  // take as many of this bill as possible
        dollars %= bill;           // reduce the remaining amount
    }

    cout << result << endl;
    return 0;
}
