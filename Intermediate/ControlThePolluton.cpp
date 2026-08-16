#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,x,y;
	    cin >> n >> x >> y;
	    int ans = 0;
	    //initially, smoke emitted for 100 people (25 cars, 1 bus) 
	    int bus = x; 
	    int car = 25*y; 
	    //find how many hundreds in n
	    int count = n/100;
	    int rem = n%100;
	    //update answer
	    ans = count*min(car,bus);
	    //find for the remaining 
	    car = rem/4;
	    if(rem%4!=0)
	    {
	        car++;
	    }
	    bus = rem/100;
	    if(rem%100!=0)
	    {
	        bus++;
	    }
	    //update ans
	    ans = ans + min(car*y,bus*x);
	    cout << ans << endl;
	}
	
	
	
	
	return 0;
}