#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    // Store numbers in an array to easily check all permutations
    int arr[] = {a, b, c, d};
    sort(arr, arr + 4);
    
    // Check all possible proportions using cross-multiplication:
    // 1. arr[0] * arr[3] == arr[1] * arr[2]  (e.g., 1 : 2 = 2 : 4)
    // 2. arr[0] * arr[2] == arr[1] * arr[3]  (alternative groupings)
    if (arr[0] * arr[3] == arr[1] * arr[2] || arr[0] * arr[2] == arr[1] * arr[3]) {
        cout << "Possible" << endl;
    } else {
        cout << "Impossible" << endl;
    }
    
    return 0;
}