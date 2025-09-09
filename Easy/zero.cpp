#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int number,divisor,moves;
    vector<int> levels;
    cin >> n;
    moves=0;
    while (n--)
    {
        cin >> number >> divisor;
        while(number>0) {
            if(number%divisor==0) {
                number/=divisor;
            } else {
                number--;
            }
            moves++;
        }
        levels.push_back(moves);
        moves=0;
    }
    for(auto i:levels) {
        cout << i << endl;
    }
    return 0;
    
}