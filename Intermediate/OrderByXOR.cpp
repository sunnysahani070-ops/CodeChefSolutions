#include <iostream>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int b1 = -1, b2 = -1;
    
    // Find the highest bit where A and B differ
    for (int i = 29; i >= 0; i--) {
        if ((a ^ b) & (1 << i)) {
            b1 = i;
            break;
        }
    }
    
    // Find the highest bit where B and C differ
    for (int i = 29; i >= 0; i--) {
        if ((b ^ c) & (1 << i)) {
            b2 = i;
            break;
        }
    }

    // Construct X by satisfying the bit requirements
    int x = 0;
    x |= (a & (1 << b1)); // Set b1 bit of X to match A
    x |= (b & (1 << b2)); // Set b2 bit of X to match B

    // Verify if the constructed X satisfies the full condition
    if ((a ^ x) < (b ^ x) && (b ^ x) < (c ^ x)) {
        cout << x << "\n";
    } else {
        cout << -1 << "\n";
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