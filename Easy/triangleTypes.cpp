#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> sides(4);
    for(int i=0;i<4;i++) cin >> sides[i];

    sort(sides.begin(), sides.end());

    // Check for triangle
    for(int i=0;i<2;i++) { // only need i=0 and i=1 for 4 sides
        if(sides[i] + sides[i+1] > sides[i+2]) {
            cout << "TRIANGLE\n";
            return 0;
        }
    }

    // Check for degenerate triangle (segment)
    for(int i=0;i<2;i++) {
        if(sides[i] + sides[i+1] == sides[i+2]) {
            cout << "SEGMENT\n";
            return 0;
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}
