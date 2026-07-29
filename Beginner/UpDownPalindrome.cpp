#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<long long> A(N);

        for (int i = 0; i < N; i++)
            cin >> A[i];

        long long L = LLONG_MIN;
        long long R = LLONG_MAX;

        bool ok = true;

        for (int i = 0; i < N / 2; i++) {
            long long x = A[i];
            long long y = A[N - 1 - i];

            long long d = abs(x - y);

            if (d == 0) {
                continue;
            }
            else if (d == 2) {
                long long lo = min(x, y);
                long long hi = max(x, y);

                L = max(L, lo);
                R = min(R, hi - 1);
            }
            else {
                ok = false;
                break;
            }
        }

        if (ok && L <= R)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}