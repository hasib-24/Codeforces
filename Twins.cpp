#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> money(n);
    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> money[i];
        total += money[i];
    }

    sort(money.rbegin(), money.rend()); 

    int mySum = 0, count = 0;
    for (int i = 0; i < n; i++) {
        mySum += money[i];
        count++;
        if (mySum > total - mySum) break;
    }

    cout << count << endl;
    return 0;
}
