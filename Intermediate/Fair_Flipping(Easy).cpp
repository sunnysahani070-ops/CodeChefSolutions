#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int zeros = 0;
    for (char c : s) {
        if (c == '0') {
            zeros++;
        }
    }
    int ones = n - zeros;

    if (zeros < k || ones < k) {
        cout << s << endl;
    } else if (zeros == k && ones == k) {
        string flipped = s;
        for (int i = 0; i < n; i++) {
            flipped[i] = (flipped[i] == '0' ? '1' : '0');
        }
        cout << min(s, flipped) << endl;
    } else {
        cout << string(zeros, '0') + string(ones, '1') << endl;
    }
}

int main() {
    
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}