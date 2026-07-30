#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;

    while (t--) {
        long long n, p;
        cin >> n >> p;

        vector < long long > arr(n);
        for (auto & i: arr) {
            cin >> i;
        }
        long long hard = 0;
        long long easy = 0;
        for (auto it: arr) {
            if (it <= (p / 10))
                hard++;
            else if (it >= (p / 2))
                easy++;
        }
        if (hard==2 and easy==1)
            cout << "yes" << endl;
        else cout << "no" << endl;
    }
}