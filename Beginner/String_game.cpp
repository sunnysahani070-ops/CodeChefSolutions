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
	    int freq[26]={0};
	    for(int i=0;i<n;i++){
	        freq['z'-s[i]]++;
	    }
	    bool flag=true;
	    for(int i=0;i<26;i++){
	        if(freq[i]%2!=0){
	            flag=false;
	        }
	    }
	    if(flag){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	    t--;
	}

}
