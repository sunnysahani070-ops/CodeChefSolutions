#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        long long sum = 0;
        int odd = 0;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            sum += x;
            if (x % 2) odd++;
        }

        if (sum % 2 == 0)
            cout << sum - (odd + 1) / 2 << endl;
        else
            cout << odd / 2 << endl;
    }

    return 0;
}