#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        int n, p;
        string s;
        
      
        cin >> n >> p >> s; 
        
        int minL = 0;
        int minR = 0;
        
     
        for (int i = 0; i < p; i++) {
            if (s[i] == 'R') {
                minL++;
            }
        }
        
        
        for (int i = p - 1; i < s.size(); i++) {
            if (s[i] == 'L') {
                minR++;
            }
        }
        
        int ans = min(minL, minR);
        cout << ans << endl;
        t--;
    }
    return 0;
}