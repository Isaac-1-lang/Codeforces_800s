#include <bits/stdc++.h>
using namespace std;


int main() {
    int arr[] = {21,32,24,340,12};
    int k=2;
    for(int i=k;i<=sizeof(arr)/sizeof(arr[0]);i++) {
        arr[i]=arr[k+1];
    }
    for(int i=0;i<sizeof(arr)/sizeof(arr[0])-1;i++) {
       cout << arr[i] << " ";
    }
    return 0;
}