#include <bits/stdc++.h>
using namespace std;

// Collartz conjecture
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long k, x;
        cin >> k >> x;
        long long ans = x << k; 
        cout << ans << '\n';
    }
    return 0;
}
