#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, h, y1, y2, l;
        cin >> n >> h >> y1 >> y2 >> l;
        
        int ans = 0;
        bool exhausted = false;
        
        for (int i = 0; i < n; i++) {
            int type, x;
            cin >> type >> x;
            
            if (exhausted) {
                continue;
            }
            
            if (type == 1) {
                if (h - y1 <= x) {
                    ans++;
                } else {
                    l--;
                    if (l > 0) {
                        ans++;
                    } else {
                        exhausted = true;
                    }
                }
            } else if (type == 2) {
                if (y2 >= x) {
                    ans++;
                } else {
                    l--;
                    if (l > 0) {
                        ans++;
                    } else {
                        exhausted = true;
                    }
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}