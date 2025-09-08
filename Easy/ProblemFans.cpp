#include <iostream>

using namespace std;


int main() {
    int n;
    // Input the number of problems;
    cin >> n;
    int p,v,t,implemented = 0;
    while (n--)
    {
          cin >> p >> v >> t;
          int sure = p+v+t;
          if(sure >=2) {
        implemented++;
        } 
    }
    
   
    cout << implemented << endl;
    return 0;
}