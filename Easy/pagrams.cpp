#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int length;
    cin >> length;
    cin >> s;
    string lowercasedString = tolower(s);
    if(lowercasedString == s) {
        cout << "NO";
    } else {
        cout << "YES";
    }

}