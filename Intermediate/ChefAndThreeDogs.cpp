#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        double s, v;
        cin >> s >> v;
        
        // Time = Distance / Relative Velocity
        // Relative Velocity = v - v*cos(120 degrees) = v - (-v/2) = 1.5v
        double time = (2.0 * s) / (3.0 * v);
        
        cout << fixed << setprecision(6) << time << "\n";
    }
    return 0;
}