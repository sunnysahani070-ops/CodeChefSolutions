#include <iostream>
using namespace std;


int main() {
	// your code goes here
	
	long int t,n,i,cnt;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    string s;
	    cin>>s;
	    cnt=0;
	    for(int i=0;i<n-1;i++)
	    {
	        if(s[i] != s[i+1])
	        cnt++;
	    }
	    if(cnt%2 == 0)
	    cout<<cnt/2<<endl;
	    else
	    cout<<(cnt+1)/2<<endl;
	}
	return 0;
}