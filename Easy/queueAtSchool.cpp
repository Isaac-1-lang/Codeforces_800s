#include <bits/stdc++.h>
using namespace std;

int main() {
    int children,shiftTimes;
    cin >> children >> shiftTimes;
    string s;
    cin >> s;
    while (shiftTimes--)
    {
        for (int i = 0; i < s.length() - 1; i++)
        {
            if(s[i] == 'B' && s[i+1] == 'G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout << s;
    
}