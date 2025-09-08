#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> digits;
    for (char c : s) {
        if (isdigit(c)) {
            digits.push_back(c - '0');
        }
    }
    sort(digits.begin(), digits.end());
    // If i doesn't point to the last element, print a plus sign every after each number.
    for(int i=0;i<digits.size();i++){
        cout << digits[i];
        if(i != digits.size()-1) cout << "+";
    }
}