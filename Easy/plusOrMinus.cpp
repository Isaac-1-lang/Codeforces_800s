#include <bits/stdc++.h>
using namespace std;


int main() {
    int testcases,a,b,c;
    cin >> testcases;
    vector<string> results;
    while(testcases--) {

        cin >> a >> b>>c;
        if(a+b==c) {
            results.push_back("+");
        } else if(a-b==c) {
            results.push_back("-");
        }
    }
    for(string res: results) {
        cout << res << endl;
    }
    return 0;
}