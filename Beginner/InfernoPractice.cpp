#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    
    int single_time = 0;
    int multi_time = 0;
    
    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        
        // Multi-target mode time is just the maximum health value
        multi_time = max(multi_time, h);
        
        // Single-target mode time uses ceiling division: ceil(h / x)
        single_time += (h + x - 1) / x;
    }
    
    // The answer is the minimum of the two modes
    cout << min(single_time, multi_time) << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}