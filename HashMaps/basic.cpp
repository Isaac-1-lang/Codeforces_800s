#include <bits/stdc++.h>
using namespace std;


int main() {
    unordered_map<int,int> freq;
    int arr[] = {21,32,22,21,30,32,21,22};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=len;i++) {
        freq[arr[i]]++;
    }

    for(auto it:freq) {
        cout << it.first << " appears " << " " << it.second << "times  in " << "Array" << endl;
    }
    return 0;
}