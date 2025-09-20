#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;
        vector<pair<long long,int>> req(n);
        for (int i = 0; i < n; i++) {
            cin >> req[i].first >> req[i].second;
        }

        long long points = 0;
        long long curTime = 0;
        int curSide = 0; // FJ starts at side 0

        for (int i = 0; i < n; i++) {
            long long nextTime = req[i].first;
            int nextSide = req[i].second;
            long long gap = nextTime - curTime; // minutes available

            // Max zig-zag moves possible in this interval
            points += gap; 

            // But we must ensure at nextTime, he is on nextSide
            // If parity does not match, he must "waste" one move
            int requiredParity = (nextTime % 2 == nextSide % 2 ? 0 : 1);
            if ((curSide + gap) % 2 != nextSide) {
                points--; // lose 1 point to adjust
            }

            // Move FJ to next requirement
            curTime = nextTime;
            curSide = nextSide;
        }

        // After last requirement → from curTime to m
        long long remaining = m - curTime;
        points += remaining;

        cout << points << "\n";
    }

    return 0;
}
