#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> volFracts(n);
    double sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> volFracts[i];
        sum += volFracts[i]; // sum while reading → one loop
    }

    double result = sum / n;
    cout << fixed << setprecision(13) << result << endl;

    return 0;
}
