#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        int n;
        cin >> n; 
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int j = -1;
        int k = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                j = i;
            }
            if (a[i] == n) {
                k = i;
            }
        }
        
        int operation = 0;
        if (j < k) {
            
            operation = (n - 1 - k) + j; 
        } else {
            operation = (n - 1 - k) + j - 1;
        }
        
        cout << operation << endl;
        t--;
    }
    return 0;
}