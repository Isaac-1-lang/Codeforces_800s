#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<string> results;
    int testcases;
    vector<int> a, b;
    int val;
    cin >> testcases;
    while (testcases--)
    {
        int n;
        cin >> n;
        for(int i=0;i<n;i++) {
            cin >> val;
            a.push_back(val);
        }
        if(n==1)  {
            results.push_back("NO");
        } else if(n==2) {
            results.push_back("YES");
        } else {
            for(int i=0;i<n-1;i++) {
                b[i]=a[(i+1)%n];
            }
            for(int i=0;i<n;i++) {
               if(a[i]!=b[i]) {
                results.push_back("YES");
                break;
            } 
        }
        results.push_back("YES");
    }

    return 0;
} 