#include <bits/stdc++.h>
using namespace std;



int main() {
    int groups,n,current,previous;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> current;
        if(i==0) {
            groups=1;
        }
        else if(current!=previous) {
            groups++;
        }
        previous=current;
    }


    cout << groups << endl;
    
}