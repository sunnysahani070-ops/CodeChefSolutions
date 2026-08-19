#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
	ll t,n,i,j,k;
	cin >> t;
	while(t--)
	{
	    ll x,y,m;
	    cin >> n >> m >> x >> y;
	    if(x==1ll || y==1ll)
	    {
	        if((x!=1) && (((n-1)%x==0)||(m>1 && (n-1)%x==1)))
	             cout << "Chefirnemo\n";
	        else if((y!=1) && (((m-1)%y==0)||(n>1 && (m-1)%y==1)))
	             cout << "Chefirnemo\n";
	        else if(x!=1 || y!=1)
	            cout << "Pofik\n";
	        else
	            cout << "Chefirnemo\n"; 
	    }
	    else if(((n-1)%x==0) &&  ((m-1)%y==0))
	        cout << "Chefirnemo\n";
	    else if(((n-1)%x==1) &&  ((m-1)%y==1))
	        cout << "Chefirnemo\n";
	    else
	        cout << "Pofik\n";
	}
	return 0;
}