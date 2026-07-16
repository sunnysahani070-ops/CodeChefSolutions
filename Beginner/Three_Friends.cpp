#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
	while(t>0){
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    if((-x+y+z)==0 || (x-y+z)==0 || (x+y-z)==0|| 
	    (-x-y+z)==0|| (-x+y-z)==0||(-x+y-z)==0){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	    t--;
	}

}
