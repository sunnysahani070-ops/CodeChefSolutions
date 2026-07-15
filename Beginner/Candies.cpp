#include <iostream>
#include <map>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T > 0) {
        int N;
        cin >> N;
        int A[2 * N];
        
        
        for (int i = 0; i < 2 * N; i++) {
            cin >> A[i];
        }
        
        map<int, int> mpp;
        for (int i = 0; i < 2 * N; i++) {
            mpp[A[i]]++;
        }
        
      
        bool isValid = true;
        for (auto it = mpp.begin(); it != mpp.end(); ++it) {
            if (it->second > 2) {
                isValid = false;
                break; 
            }
        }
        
        if (isValid) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        
        T--;
    }
    return 0;
}