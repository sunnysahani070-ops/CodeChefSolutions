#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t > 0) {
            int n;
            cin >> n;
            string s;
            cin >> s;
            
            int count0 = 0;
            int count1 = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] == '0') {
                    count0++;
                } else if (s[i] == '1') {
                    count1++;
                }
            }
            
            
            for (int i = 0; i < n; i++) {
                if (count0 > 0) {
                    s[i] = '0';
                    count0--;
                } else {
                    s[i] = '1';
                }
            }
            
            cout << s << "\n";
            t--;
        }
    }
    return 0;
}