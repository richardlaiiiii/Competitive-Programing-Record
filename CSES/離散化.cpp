#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n;
    cin>>n;
    
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i],b[i]=a[i];
    sort(b.begin(),b.end());
    b.resize(unique(b.begin(),b.end())-b.begin());
    for(int i=0;i<n;i++) {
        a[i]=lower_bound(b.begin(),b.end(),a[i])-b.begin()+1;
    }
    for(auto it:a) {
        cout<<it<<' ';
    }
    cout<<'\n';
}