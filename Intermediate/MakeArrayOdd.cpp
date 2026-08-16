

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl

int power(int a, int b)
{
	int x = 1;
	while (b)
	{
		if (b & 1) x *= a;
		a *= a;
		b >>= 1;
	}
	return x;
}

const int N = 200005;


int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	clock_t z = clock();

	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int arr[n];
		float odd=0,even=0;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin>>arr[i];
			if(arr[i]%2==0){
				even++;
			}
			else{
				odd++;
			}
		}

		if(x%2!=0){
			cout<<ceil(even/2)<<endl;
		}
		else{
			if(odd==0){
				cout<<-1<<endl;
			}
			else{
				cout<<even<<endl;
			}
		}
	}


	return 0;
}