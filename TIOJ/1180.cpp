#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
typedef long long ll;
using namespace std;
int ans[14]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,1932053504},t,n;
int main() {
    fastio;
    cin>>t;
    for(int i=0;i<t;i++) {
        cin>>n;
        cout<<"Case #"<<i+1<<":\n";
        for(int j=0;j<=n;j++) {
            cout<<"TFCIS"<<j<<"="<<ans[j]<<'\n';
        }
    }
    return 0;
}