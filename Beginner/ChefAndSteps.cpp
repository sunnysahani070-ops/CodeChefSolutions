#include <iostream>
#include <sstream> // Include the <sstream> header for using stringstream
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        // Create a stringstream to accumulate results
        stringstream result;

        for (int i = 0; i < n; i++) {
            int d;
            cin >> d;
            if (d % k == 0)
                result << "1";
            else
                result << "0";
        }

        // Print the entire result after the loop
        cout << result.str() << endl;
    }
    return 0;
}