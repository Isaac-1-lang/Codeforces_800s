#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    vector<int> results;
    cin >> tc;
    while (tc--) {
        int a, b, moves;
        cin >> a >> b;

        if (a % b == 0) {
            results.push_back(0);
        } else {
            moves = b - (a % b);
            results.push_back(moves);
        }
    }

    for (int d : results) {
        cout << d << endl;
    }
}
