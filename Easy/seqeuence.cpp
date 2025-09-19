#include <bits/stdc++.h>
using namespace std;

int main() {
    int testcases;
    cin >> testcases;
    
    vector<int> results;  // Use vector to store results
    
    while(testcases--) {
        int x, n;
        cin >> x >> n;
        
        if(n % 2 == 0) {
            results.push_back(0);
        } else {
            results.push_back(x);
        }
    }
    
    // Print all results
    for(int res : results) {
        cout << res << endl;
    }
    
    return 0;
}
