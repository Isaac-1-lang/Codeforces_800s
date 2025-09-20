#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    
    while (T--) {
        long long x, y;
        cin >> x >> y;

        long long ans = -1;
        long long limit = sqrt(2LL * (x + y)) + 10;

        for (long long k = 1; k <= limit; k++) {
            long long m = (k + 1) / 2;  // number of odd-positioned steps (x-direction)
            long long ev = k / 2;       // number of even-positioned steps (y-direction)

            // Minimum possible sums
            long long min_x = m * m;           // 1² + 3² + 5² + ... = (sum of first m odd numbers)
            long long min_y = ev * (ev + 1);  // 2 + 4 + 6 + ... = (sum of first ev even numbers)
            
            // Check if we can reach the target
            if (min_x >= x && min_y >= y) {
                long long excess_x = min_x - x;
                long long excess_y = min_y - y;
                
                // We can redistribute excess movement, but only in even amounts
                // (because we can move +d in one direction and -d in another, net change = 2d)
                if (excess_x % 2 == 0 && excess_y % 2 == 0) {
                    ans = k;
                    break;
                }
            }
        }

        cout << ans << "\n";
    }
    
    return 0;
}