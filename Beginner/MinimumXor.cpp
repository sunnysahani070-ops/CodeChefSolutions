#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    int total_xor = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_xor ^= a[i];
    }
    int min_xor = total_xor;
    for (int i = 0; i < n; i++) {
        int current_xor = total_xor ^ a[i];
        min_xor = min(min_xor, current_xor);
    }
    
    cout << min_xor << "\n";
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