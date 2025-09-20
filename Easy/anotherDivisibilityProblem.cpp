#include <bits/stdc++.h>
using namespace std;

// Function to compute 10^len % mod efficiently
long long pow10mod(long long len, long long mod) {
    long long result = 1;
    long long base = 10 % mod;
    while (len > 0) {
        if (len & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        len >>= 1;
    }
    return result;
}

// Function to get number of digits of y
int numDigits(long long y) {
    return to_string(y).size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;

        long long y = 1;

        while (true) {
            long long len_y = numDigits(y);
            long long mod = x + y;

            long long pow10 = pow10mod(len_y, mod);

            // concat(x, y) % (x + y)
            long long concat_mod = (x * pow10 % mod + y % mod) % mod;

            if (concat_mod == 0) {
                cout << y << "\n";
                break;
            }
            y++;
        }
    }
}
