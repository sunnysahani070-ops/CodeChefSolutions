#include <iostream>
#include <cmath>

using namespace std;

void solve() {
    int n, a;
    cin >> n >> a;
    
    
    int k = sqrt(n);
    
    
    cout << k * a << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}