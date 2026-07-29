#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int grp = 0;
        bool flag = false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1' && !flag) {
                grp++;
                flag = true;
            }
            if (s[i] == '0') {
                flag = false;
            }
        }
        cout << grp << endl;
    }
    return 0;
}