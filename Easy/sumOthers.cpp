#include <bits/stdc++.h>
using namespace std;


int main() {
    int testcases,a,b,c;
    cin >> testcases;
    vector<string> results;
    while(testcases--) {
        cin >> a >> b >> c;
        if(a+b==c || a+c==b || b+c==a) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }
    for(string res: results) {
        cout << res << endl;
    }
    return 0;
}