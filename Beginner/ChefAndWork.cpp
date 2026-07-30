#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    int max_val = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    
    // If any single element is greater than k, Chef can never carry it
    if (max_val > k) {
        cout << -1 << "\n";
        return;
    }
    
    int days = 1;
    int current_sum = 0;
    
    for (int i = 0; i < n; i++) {
        if (current_sum + arr[i] <= k) {
            current_sum += arr[i];
        } else {
            days++;
            current_sum = arr[i];
        }
    }
    
    cout << days << "\n";
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