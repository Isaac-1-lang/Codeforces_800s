#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p; 
    cin >> p;
    vector<int> levels;

    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        levels.push_back(x);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int y;
        cin >> y;
        levels.push_back(y);
    }

    // remove duplicates
    sort(levels.begin(), levels.end());
    levels.erase(unique(levels.begin(), levels.end()), levels.end());

    // check if they cover all levels
    if ((int)levels.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
