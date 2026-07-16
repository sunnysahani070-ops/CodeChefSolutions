#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    int n;
	    string s;
	    cin>>n>>s;
	    int cnt1=0;
	    int cnt0=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='0'){
	            cnt0++;
	        }
	        if(s[i]=='1'){
	            cnt1++;
	        }
	        
	    }
	    int operation=0;
	    if(cnt0>=cnt1){
	        operation+=cnt1;
	    }else{
	        operation=1+cnt0;
	    }
	    cout<<operation<<endl;
	    t--;
	}

}
