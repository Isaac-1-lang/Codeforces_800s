#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int x=0;
    int length;
    cin >> length;
    while(length--) {
      cin >> s;
      if(s[1]=='-') 
      {
       x-=1;
      } else {
        x+=1;
      }
    }
    cout << x << endl;
    return 0;
}