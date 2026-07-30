#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,cnt=1;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        if(i%2==0){
	            a[i]=cnt;
	        }
	        else{
	            a[i]=n-cnt+1;
	            cnt++;
	        }
	    }
	    
	    for(int i=n-1;i>=0;i--){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
