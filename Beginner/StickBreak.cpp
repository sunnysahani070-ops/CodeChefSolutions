#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        long long l, k;
        cin >> l >> k;
        if (l % k == 0) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
        t--;
    }
    return 0;
}