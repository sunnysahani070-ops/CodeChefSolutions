#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main() 
{
	ll t,n,i,j,k;
	cin >> t;
	while(t--)
	{
	    cin >> n >> k;
	    vector<ll>v(n,0ll);
	    for(i=0;i<n;i++)
	    {
	        cin >> v[i];
	    }
	    ll mini=INT_MAX;
	    for(i=0;i<n-1;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            mini=min(abs(v[i]+v[j]-k),mini);
	        }
	    }
	    cout << mini << " ";
	    ll cnt=0ll;
	    for(i=0;i<n-1;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            if((abs(v[i]+v[j]-k)==mini))
	                cnt++;
	        }
	    }
	    cout <<cnt<< "\n";
	}
	return 0;
}