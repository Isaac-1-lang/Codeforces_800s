#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,maxSum=0;
    cin >> t;
    while (t--) {
        int a,b;
    cin >> a >> b;
    // find i which is divisible by b and then take it i and multiply it with a and divide with a and then find the sum of a and b if it is even outputs else output -1
    for(int i=2;i<=b;i++) {
     if(b%i==0)  {
        int sum =(a*i) + (b/i);
        if(sum%2==0) {
            cout << sum << endl;
            maxSum = max(maxSum,sum);
            break;
        } 
     } 
    }
    if(maxSum==0) {
        cout << -1 << endl;
    }
    return 0;
}
