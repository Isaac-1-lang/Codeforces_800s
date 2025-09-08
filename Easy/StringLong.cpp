#include <iostream>
#include <string>



using namespace std;


int main() {
   // the length of the string
   int n;
   cin >> n;
   // This one causes to count until it reaches to 0 then stops without implementting 0th.
   while (n--) {
    // the string
    string s;
    cin >> s;

    // check if the string is long
    if (s.length() > 10) {
        cout << s.front() << s.length() - 2 << s.back() << endl;
    } else {
        cout << s << endl;
    }
   }
    return 0;
}