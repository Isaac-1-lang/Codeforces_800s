#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;cin >> s;int freq;vector<int> frequencies(26,0);for(char c:s) frequencies[c-'a']++;for(int i=0;i<26;i++) if(frequencies[i] !=0) cout << frequencies[i] << ' ';return 0;
}