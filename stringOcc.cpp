#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin >> s;
    int count=0;
    for(int i=0;i<s.length();i++) {
        for(int j=i+1;j<s.length()-1;) {
           if(s[i]==s[j]) {
            count++;
            s.erase(j,1);
           } else {
            j++;
           }
           
        } 
    }
    cout<< s<<endl;
    return 0;
}