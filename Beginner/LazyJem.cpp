#include <iostream>

using namespace std;

void solve() {
    long long n, b, m;
    cin >> n >> b >> m;
    
    long long total_time = 0;
    
    while (n > 0) {
        // Find how many problems Jem solves in the current batch
        long long problems = (n + 1) / 2;
        
        // Time taken to solve these problems at the current speed 'm'
        total_time += problems * m;
        
        // Subtract solved problems from the remaining count
        n -= problems;
        
        // If there are still problems left, he takes a break
        if (n > 0) {
            total_time += b;
            // Double the time taken per problem after the break
            m *= 2;
        }
    }
    
    cout << total_time << "\n";
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