#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    map<int,int> mpp;
	    for(int i=0;i<n;i++){
	        mpp[a[i]]++;
	        
	    }
	    int mx=0;
	    for(auto it: mpp){
	        mx=max(mx,it.second);
	        
	    }
	    cout<<n-mx<<endl;
	    t--;
	}

}
