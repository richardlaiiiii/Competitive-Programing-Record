#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
int a[200001],b[200005];
vector<int> v[200001];
void dfs(int x) {
    for(auto i:v[x]) {
        dfs(i);
        b[x]+=b[i]+1;
    }
}
signed main() {
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n;
    cin>>n;
    for(int i=2;i<=n;i++) {
        cin>>a[i];
        v[a[i]].push_back(i);
    }
    dfs(1);
    for(int i=1;i<=n;i++) cout<<b[i]<<" ";
}