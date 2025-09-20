#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        // Count frequency of each character
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }
        
        // Count how many characters have odd frequency
        int odd_count = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 == 1) {
                odd_count++;
            }
        }
        
        // After removing k characters, we have (n-k) characters left
        int remaining = n - k;
        
        // For a palindrome:
        // - If remaining length is even: all characters must have even frequency
        // - If remaining length is odd: exactly one character can have odd frequency
        
        bool possible = false;
        
        if (remaining % 2 == 0) {
            // Remaining length is even - need all frequencies to be even
            // We need to remove enough characters to make all frequencies even
            // Each odd frequency contributes 1 to the minimum removals needed
            possible = (odd_count <= k) && ((k - odd_count) % 2 == 0);
        } else {
            // Remaining length is odd - exactly one character should have odd frequency
            // We need to remove characters to get exactly 1 odd frequency
            if (odd_count == 0) {
                // All even - need to make exactly 1 odd, requires removing odd number
                possible = (k % 2 == 1);
            } else {
                // We have 'odd_count' odd frequencies, want exactly 1
                // Need to remove (odd_count - 1) characters minimum to fix the extra odds
                possible = ((odd_count - 1) <= k) && ((k - (odd_count - 1)) % 2 == 0);
            }
        }
        
        cout << (possible ? "YES" : "NO") << "\n";
    }
    
    return 0;
}