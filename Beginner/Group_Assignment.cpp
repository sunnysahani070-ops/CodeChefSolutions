#include <bits/stdc++.h>
using namespace std;
#define POP pop_back
#define MOD 1e7+10
#define PI 3.1415926535897932
#define PB push_back
#define MP make_pair
    
typedef long long int ll;
typedef pair<ll,ll> pll;
typedef map<ll , ll > mll;
typedef vector<ll> V;
#define fori(x) for(ll i=0; i<x; i++)
#define sorta(x) sort(x.begin(),x.end())
#define fora(x) for(auto it : x)
int main(){
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    int flag =0;
    map<ll,ll> m;
    fori(n){
        ll x;
        cin>>x;
        m[x]++;
    }
    for(auto &val : m){
        if(val.second%val.first!=0){
        flag=1;
         break;
        }
    }
    if(flag==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    
    
    
}
    return 0;
}