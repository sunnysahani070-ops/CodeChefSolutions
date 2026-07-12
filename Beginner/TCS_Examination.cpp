#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int A[3];
        int S[3];
        int d = 0;
        int s = 0;
        
        for (int i = 0; i < 3; i++) {
            cin >> A[i];
            d += A[i];
        }
        for (int i = 0; i < 3; i++) {
            cin >> S[i];
            s += S[i];
        }
        
        if (d > s) {
            cout << "DRAGON" << endl;
        } else if (s > d) {
            cout << "SLOTH" << endl;
        } else {
            if (A[0] > S[0]) {
                cout << "DRAGON" << endl;
            } else if (S[0] > A[0]) {
                cout << "SLOTH" << endl;
            } else {
                if (A[1] > S[1]) {
                    cout << "DRAGON" << endl;
                } else if (S[1] > A[1]) {
                    cout << "SLOTH" << endl;
                } else {
                    cout << "TIE" << endl;
                }
            }
        }
    }
    return 0;
}