#include <bits/stdc++.h>
using namespace std;

int main() {
    int firstBananaCost, moneyHeHas, numberOfBananas;
    cin >> firstBananaCost >> moneyHeHas >> numberOfBananas;

    int total = 0;
    for(int i = 1; i <= numberOfBananas; i++) {
        total += i * firstBananaCost;
    }

    cout << max(0, total - moneyHeHas) << endl; 
}
