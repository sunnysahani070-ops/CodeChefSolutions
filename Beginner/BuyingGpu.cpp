#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        int coins = 0;   
        int months = 0;
        bool bought = false;

        while (months <= 10000) {
            months++;
            X += Y;        
            coins += Z;    

            if (coins >= X) {
                cout << months << "\n";
                bought = true;
                break;
            }
        }

        if (!bought) cout << -1 << "\n";
    }
    return 0;
}