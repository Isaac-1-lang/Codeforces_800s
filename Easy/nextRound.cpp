#include <bits/stdc++.h>
using namespace std;


int main() {
    int participants,k;
    cin >> participants >> k;
    int scores[participants];
    for(int i=0;i<participants;i++) {
        cin >> scores[i];
    }
    int count=0;
    for(int i=0;i<participants;i++) {
        if(scores[i]>=scores[k-1] && scores[i]>0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}