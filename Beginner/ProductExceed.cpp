#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x, y, p;
	    cin>>x>>y>>p;
	    
	    int cnt = 0;
	    while(x*y < p){
	        if(x>y) y++;
	        else x++;
	        
	        cnt++;
	    }
	    
	    cout<<cnt<<endl;
	}

}
