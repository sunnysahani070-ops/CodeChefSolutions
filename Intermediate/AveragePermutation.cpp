#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if (n == 3) {
        cout << "1 2 3\n";
        return;
    }
    
    cout << n << " " << n - 2 << " ";
    for (int i = 1; i <= n - 4; ++i) {
        cout << i << " ";
    }
    cout << n - 3 << " " << n - 1 << "\n";
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