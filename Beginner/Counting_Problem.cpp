#include <bits/stdc++.h>
using namespace std;

void problemSolution1649587302()
{
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) cin >> arr[i];
  int even = 0;
  int odd = 0;
  for(int i = 0; i < n; i++)
  {
    if(arr[i] % 2 == 0) even++;
    else odd++;
  }
  if(odd % 2 == 0 && odd != 0) cout << "YES" << "\n";
  else cout << "NO" << "\n";
}

void testCases4952876301()
{
  long long tt5914682730;
  cin >> tt5914682730;
  for(long long i9731546820 = 0; i9731546820 < tt5914682730; i9731546820++)
  {
    problemSolution1649587302();
  }
}

int main()
{
  #ifndef ONLINE_JUDGE
  // freopen("a.in", "r", stdin);
  // freopen("a.out", "w", stdout);
  #endif // ONLINE_JUDGE

  ios::sync_with_stdio(0);
  cin.tie(0);

  testCases4952876301();
  // problemSolution1649587302();

  return 0;
}
