#include <bits/stdc++.h>
using namespace std;

int main() {
int x; 
cin >> x;
int ten = x/10 ;
int one = x%10 ;

if ( ten != one ){
    cout << " yes "<< endl ;
}else {
    cout << " no "<< endl ;
}
return 0 ;
}
