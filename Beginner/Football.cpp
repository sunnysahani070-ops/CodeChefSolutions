#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<int> b(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    int max_points = 0; // Tracks the highest score found so far
    
    for (int i = 0; i < n; i++) {
        // Calculate points for the current player
        int current_points = (a[i] * 20) - (b[i] * 10);
        
        // If a player's points are negative, they get 0 points instead
        if (current_points < 0) {
            current_points = 0;
        }
        
        // Update the maximum score found
        if (current_points > max_points) {
            max_points = current_points;
        }
    }
    
    cout << max_points << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}