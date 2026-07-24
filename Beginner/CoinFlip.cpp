#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int G;
        cin >> G;

        while (G--) {
            int I, N, Q;
            cin >> I >> N >> Q;

            if (N % 2 == 0) {
                // If N is even, heads and tails count are equal
                cout << N / 2 << "\n";
            } else {
                // If N is odd
                if (I == Q) {
                    cout << N / 2 << "\n";
                } else {
                    cout << (N / 2) + 1 << "\n";
                }
            }
        }
    }

    return 0;
}