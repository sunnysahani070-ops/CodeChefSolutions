#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // If there is only 1 element, no operations are needed.
    if (n == 1) {
        cout << "YES\n";
        return;
    }
    
    sort(a.begin(), a.end());
    
    // Check if the smallest + largest <= K
    if (a[0] + a[n - 1] <= k) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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