/*************************************************

 Author :- Traverser_25
 Current Aim    :-  Reach pupil at CF
 Moto   :-  Keep going, that's only way
 
***************************************************/
#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <cmath>
#include <map>
#include <vector>
#include <set>
#include <queue>
#include <deque>
#define MAX INT32_MAX
#define fr(i, a, b) for (int i = a; i < b; i++)
#define ll long long int
#define pb emplace_back
#define ppb pop_back
#define all(x) x.begin(), x.end()
#define rev(x) x.rbegin(), x.rend()
#define read(x, n) fr(i, 0, n) cin >> x[i];
#define pds(x)       \
	for (auto i : x) \
		cout << i << " ";
#define endl '\n'
using namespace std;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

ll lcm(ll a, ll b)
{
	ll l = (a * b) / gcd(a, b);
	return l;
}
bool isp(int x) { return x && (!(x & (x - 1))); }
ll max(ll a, ll b) { return a > b ? a : b; }
ll min(ll a, ll b) { return a < b ? a : b; }
const int mod = 1e9 + 7;

int get_sum(int x)
{
	int sum = 0;
	while (x > 0)
	{
		sum += (x % 10);
		x /= 10;
	}
	return sum;
}

void Traverser()
{
	//--------------------Practice_logs---------------//
	//Time:-
	//Date:-
	//Stuff:-
	//Logic:-
	//-------------------------------------------------//
	int n, ans = 0;
	cin >> n;
	for (int i = 1; i <= 81; i++)
	{
		int f = i;
		int s = get_sum(i);
		int rest = n - (s + f);
		if (rest > 0)
		{
			if (get_sum(rest) == i)
				ans++;
		}
	}

	cout << ans << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll TC;
	TC = 1;
//	cin >> TC;
	while (TC--)
	{
		Traverser();
	}

	return 0;
}