#include <bits/stdc++.h>
using namespace std;
// These are what we call function templates which help us to avoid too much overloading!! 

template <typename T1, typename T2>
void display(T1 a, T2 b) {
    cout << a << " and " << b << "\n";
}

int main() {
    display(5, 3);      // int + double
    display("Hello", 42);  // string + int
}
