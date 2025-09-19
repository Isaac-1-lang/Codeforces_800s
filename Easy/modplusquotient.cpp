#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        long long l, r, a;
        cin >> l >> r >> a;

        // candidate 1: the largest number <= r with remainder a-1
        long long x1 = r - (r % a) + (a - 1);
        if (x1 > r) x1 -= a;
        if (x1 < l) x1 = l; // make sure in range

        long long f1 = x1 / a + x1 % a;
        long long f2 = r / a + r % a;

        cout << max(f1, f2) << "\n";
    }
    return 0;
}
