#include <bits/stdc++.h>
using namespace std;

int main() {
    // Uninitialized indices receive zero 
    int count = 0;
    int n = 7;
    int numbers[7] = {21, 43, 2010, 234, 302, 20102, 3420};  
    vector<int> freq;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {   
            if (numbers[i] == numbers[j]) {
                count++;
            }
        }
        freq.push_back(count);
        count = 0;
    }

    for (int i : freq) {
        cout << i << ' ';
    }
    return 0;
}
