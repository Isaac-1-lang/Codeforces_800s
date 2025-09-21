#include <bits/stdc++.h>
using namespace std;


int main() {
  
    int arr[]={21,320,12,450,67,34,12,890};
    int pos=2;
    int insert=21010;
    for(int i=sizeof(arr)/sizeof(arr[0]);i>=pos;i--) {
        arr[i+1]=arr[i];
    }
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=length++;i++) {
        cout << arr[i] << endl;
    }
    
  return 0;
}