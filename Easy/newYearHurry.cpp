#include <bits/stdc++.h>
using namespace std;


int main() {
    int totalMinutes = 240;
    int questions,timetoReach;
    cin >> questions >> timetoReach;
    int timeLeftForPossibleQuestions = totalMinutes - timetoReach;
    int timeTaken = 0;
    int count = 0;
    for(int i=1; i<=questions; i++) {
        timeTaken += i*5;
        if(timeTaken <= timeLeftForPossibleQuestions) {
            count++;
        } else {
            break; // no more questions can be solved
        }
    }
    cout << count << endl;
    return 0;
}