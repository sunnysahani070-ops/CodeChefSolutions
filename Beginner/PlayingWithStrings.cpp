#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{ int ones,zeros=0;
	
	    int n;
	    cin>>n;
	    string str,r;
	    cin>>str>>r;
	   ones = count(str.begin(), str.end(), '1');
	   zeros=count(r.begin(),r.end(),'1');
	   
	    if(ones==zeros)
	    
	        cout<<"YES"<<endl;
	    
	    else 
	    
	        std::cout << "NO" << std::endl;
	    
	}
	return 0;
}
