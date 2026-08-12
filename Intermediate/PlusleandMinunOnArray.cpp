#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    long long initial_sum = 0;
    long long min_even = 1e18;
    long long max_odd = -1;

    for (int i = 0; i < n; i++) {
        long long val;
        cin >> val;
        val = abs(val); // Work directly with absolute values

        if (i % 2 == 0) {
            initial_sum += val;
            min_even = min(min_even, val);
        } else {
            initial_sum -= val;
            max_odd = max(max_odd, val);
        }
    }

    if (max_odd > min_even) {
        initial_sum += 2 * (max_odd - min_even);
    }

    cout << initial_sum << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}