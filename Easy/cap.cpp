#include <bits/stdc++.h>
using namespace std;


int main() {
     int n;
    cin >> n;
    int result=pow(5,n);
    int lastTwoDigits; 
    // With mod 100, we get the last 2 digits, 1000 we get 3 last digits bro!!!!!!!!!!
    lastTwoDigits = result % 100;
    cout << lastTwoDigits << endl;
    return 0;
}