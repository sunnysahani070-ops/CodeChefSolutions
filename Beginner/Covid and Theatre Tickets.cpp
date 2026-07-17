#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    int r,c;
	    cin>>r>>c;
	    int countr =0;
	    for(int i=0;i<r;i+=2){
	        countr ++;
	    }
	    int countc=0;
	    for(int i=0;i<c;i+=2){
	        countc++;
	    }
	    int ans=countr*countc;
	    cout<<ans<<endl;
	    t--;
	    
	}

}
