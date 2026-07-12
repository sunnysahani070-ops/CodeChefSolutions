#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string s;
        cin >> s;
        
        int count = 0;
        bool is_hard = false;
        
        for (int i = 0; i < N; i++) {
            // Fix 1 & 2: Use == for comparison and single quotes for chars
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                count = 0; // Reset the consecutive consonant count if it's a vowel
            } else {
                count++; // Increment if it's a consonant
            }
            
            // Check inside the loop if we hit 4 consecutive consonants at any point
            if (count >= 4) {
                is_hard = true;
            }
        }
        
        if (is_hard) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}