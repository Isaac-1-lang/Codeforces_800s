#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<string> months={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int n;
    string month;
    cin >> month;
    cin >> n;
    if(n%12==0) {
        cout << month << endl;
    } else {
        auto it = find(months.begin(), months.end(), month);
        int index = distance(months.begin(), it);
        index = (index +n) % 12; // move to next month, wrap around using modulo
        cout << months[index] << endl;
    }
    return 0;
}