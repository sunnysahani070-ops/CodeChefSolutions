#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int diff1 = 0;
    int diff2 = 0;
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        int parity = a % 2;
        
        if (parity != (i % 2)) {
            diff1++;
        }
        
        if (parity != ((i + 1) % 2)) {
            diff2++;
        }
    }
    
    cout << min(diff1, diff2) << "\n";
}

int main() {
    
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}