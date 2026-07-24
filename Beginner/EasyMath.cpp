#include<bits/stdc++.h>
using namespace std;

int sum_of_digits(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int max_sum = -1;
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                int prod = a[i] * a[j];
                int sum = sum_of_digits(prod);
                max_sum = max(max_sum, sum);
            }
        }
        cout << max_sum << endl;
    }
    return 0;
}