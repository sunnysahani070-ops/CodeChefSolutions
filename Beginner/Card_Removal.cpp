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
	    int mx=0;
	    for(int i=0;i<n;i++){
	        mpp[a[i]]++;
	        mx=max(mx,mpp[a[i]]);
	    }
	    int ans=n-mx;
	    cout<<ans<<endl;
	    t--;
	    
	}

}
