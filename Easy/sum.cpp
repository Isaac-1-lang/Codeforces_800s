#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    // Mathematical O(1) solution
    // Pattern: -1 + 2 - 3 + 4 - 5 + 6 - ...
    // Grouping pairs: (-1+2) + (-3+4) + (-5+6) + ... = 1 + 1 + 1 + ...
    // For even n: we have n/2 pairs, each contributing +1, so result = n/2
    // For odd n: we have (n-1)/2 pairs contributing +1, plus final term -n
    //           result = (n-1)/2 - n = (n-1-2n)/2 = -(n+1)/2
    
    long long result;
    if (n % 2 == 0) {
        result = n / 2;
    } else {
        result = -(n + 1) / 2;
    }
    
    cout << result << endl;
    return 0;
}