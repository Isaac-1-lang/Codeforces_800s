#include <bits/stdc++.h>
using namespace std;

int main() {
    int coordinate;
    cin >> coordinate;

    // If coordinate is between 1 and 5
    if (coordinate >= 1 && coordinate <= 5) {
        cout << 1 << endl;
    } else {
        int minValue = INT_MAX; // initialize to a very large number
        for (int i = 1; i <= 4; i++) { // check divisors 1 to 4
            int result = coordinate / i;
            if (result < minValue) {
                minValue = result;
            }
        }
        cout << minValue << endl;
    }

    return 0;
}
