#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T > 0) {
        int N, K;
        cin >> N >> K;
        
        for (int i = 0; i < N; i++) {
            int withdrawal_amount;
            cin >> withdrawal_amount;
            
            if (withdrawal_amount <= K) { 
                K -= withdrawal_amount; 
                cout << 1;
            } else {
                cout << 0;
            }
        }
        cout << endl;
        T--;
    }
    return 0;
}