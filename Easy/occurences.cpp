#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> res(2*n, 0);

        int idx = 0;
        for (int x = 1; x <= n; x++) {
            // move idx to next empty slot
            while (res[idx] != 0) idx++;
            res[idx] = x;
            res[idx + x] = x; // guaranteed within bounds
        }

        for (int i = 0; i < 2*n; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
}
