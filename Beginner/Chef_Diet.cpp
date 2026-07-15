#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    int N,K;
	    cin>>N>>K;
	    int A[N];
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	    }
	    int sum=0;
	    int j=-1;
	    bool flag=true;
	    for(int i=0;i<N;i++){
	        if(A[i]+sum<K){
	            j=i+1;
	            flag=false;
	            break;
	        }if(A[i]+sum>=K){
	            sum+=A[i]-K;
	        }
	    }
	    if(flag){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<" "<<j<<endl;
	    }
	    t--;
	}

}
