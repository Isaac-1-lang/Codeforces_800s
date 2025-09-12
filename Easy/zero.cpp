#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int moves;
    long long number, divisor;
    vector<int> levels;
    cin >> n;
    moves=0;
    while (n--)
    {
        cin >> number >> divisor;// Enter the number and the divisor
        while(number>0) {// We might decrement or divide but count each happening!
            if(number%divisor==0) {
               long long q= number/divisor;
                number=q;
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