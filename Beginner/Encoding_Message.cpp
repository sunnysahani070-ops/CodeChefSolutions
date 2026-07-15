#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    if(n%2==1){
	        int i=0;
	        while(i<n-1){
	            char temp=s[i];
	            s[i]=s[i+1];
	            s[i+1]=temp;
	            i+=2;
	        }
	    }else{
	        int i=0;
	        while(i<n){
	            char temp=s[i];
	            s[i]=s[i+1];
	            s[i+1]=temp;
	            i+=2;
	        }
	        
	    }
	    for(int i=0;i<n;i++){
	        s[i]='z'+'a'-s[i];
	    }
	    cout<<s<<endl;
	    t--;
	    
	}

}
