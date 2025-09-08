#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        long long best = 0;
        for (int i = 0; i < n; ++i) {
            long long prod = 1;
            for (int j = 0; j < n; ++j) {
                long long val = a[j] + (j == i ? 1 : 0);
                prod *= val;
            }
            best = max(best, prod);
        }
        cout << best << '\n';
    }
    return 0;
}
