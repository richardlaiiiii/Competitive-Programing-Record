#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
using namespace std;
signed main() {
    fastio;
    int n,x,sum,tmp;
    while(cin>>n) {
        priority_queue<int, vector<int>, greater<int> > pq;
        sum=0;
        while(n--) cin>>x,pq.push(x);
        while(!pq.empty()) tmp=pq.top(),pq.pop(),tmp+=pq.top(),pq.push(tmp),sum+=tmp;
        cout<<sum<<'\n';
    }
}