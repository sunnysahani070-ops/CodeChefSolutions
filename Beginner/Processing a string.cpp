#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                int a = s[i] - '0';
                count += a;
            }
        }
        cout << count << endl;
        t--;
    }
    return 0;
}