#include <bits/stdc++.h>
using namespace std;



int main() {
    int arr[] ={1,3,5,3,8,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3; // window size.
    int window_sum=0;
    // sum first window
    for(int i=0;i<k;i++) {
        window_sum+=arr[i];
    }
    int max_sum=window_sum;


    // SLide the windows
    for(int i=k;i<n;i++) {
        window_sum=window_sum+arr[i]-arr[i-k];
        max_sum=max(max_sum,window_sum);
    }
     cout << "Maximum sum of subarray of size " << k << " is " << max_sum << endl; 
    return 0;
}