#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int start_idx = -1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'z') {
            start_idx = i;
            break;
        }
    }

    if (start_idx != -1) {
        for (int i = start_idx; i < n; ++i) {
            if (s[i] == 'z') {
                s[i] = 'a';
            } else {
                break;
            }
        }
    }

    cout << s << "\n";
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}