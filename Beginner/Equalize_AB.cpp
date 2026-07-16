#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int a, b, x, c;
	    cin>> a >> b >> x;
	    c = abs(a-b);
	    
	    cout<< (c%(2*x) == 0 ? "YES":"NO" ) <<endl;
	}
	return 0;
}
