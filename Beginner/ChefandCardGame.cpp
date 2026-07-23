#include <iostream>
using namespace std;

// Helper function to calculate the sum of digits (power of a card)
long long getPower(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        int n;
        cin >> n;
        
        int chef_points = 0;
        int morty_points = 0;
        
        for (int i = 0; i < n; i++) {
            long long a, b;
            cin >> a >> b;
            
            long long power_a = getPower(a);
            long long power_b = getPower(b);
            
            if (power_a > power_b) {
                chef_points++;
            } else if (power_b > power_a) {
                morty_points++;
            } else {
                chef_points++;
                morty_points++;
            }
        }
        
        if (chef_points > morty_points) {
            cout << 0 << " " << chef_points << endl;
        } else if (morty_points > chef_points) {
            cout << 1 << " " << morty_points << endl;
        } else {
            cout << 2 << " " << chef_points << endl;
        }
        
        t--;
    }
    return 0;
}