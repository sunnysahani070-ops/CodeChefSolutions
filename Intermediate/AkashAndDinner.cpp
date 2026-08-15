#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <unordered_set>
#define ax long long

using namespace std;

void solve(){
    ax cv,q;
    cin>>cv>>q;
    vector<ax>a(cv),b(cv);
    set<ax>unq;
    ax e = 0;
    while (e < cv) {
        cin>>a[e];
        unq.insert(a[e]);
        e++;
    }
    e = 0;
    while (e < cv) {
        cin>>b[e];
        e++;
    }
    if (unq.size()<q)
    {
        cout<<-1<<endl;
        return;
    }
    map<ax, ax>re;
    e = 0;
    while (e < cv) {
        if (re.find(a[e])==re.end())
        {
            re[a[e]]=b[e];
        } else {
            re[a[e]]=min(re[a[e]],b[e]);
        }
        e++;
    }
    vector<ax>oi;
    for(auto&x:re)oi.push_back(x.second);
    sort(oi.begin(), oi.end());
    ax ans=accumulate(oi.begin(),oi.begin()+q,0LL);
    cout<<ans<<endl;

}

int main(){
    ax t=1;
    cin>>t;
    while(t--){
        solve();
    }
}