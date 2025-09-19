#include <bits/stdc++.h>
using namespace std;

int main() {
    int testcases;
    cin >> testcases;
    vector<int> results;

    while (testcases--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int mismatch_even = 0, mismatch_odd = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != i % 2) {
                if (i % 2 == 0) mismatch_even++;
                else mismatch_odd++;
            }
        }

        if (mismatch_even == mismatch_odd) {
            results.push_back(mismatch_even); // number of swaps
        } else {
            results.push_back(-1); // impossible
        }
    }

    for (int ans : results) {
        cout << ans << "\n";
    }

    return 0;
}
