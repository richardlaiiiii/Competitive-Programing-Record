#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod=1e9+7;
int n,a,b,c;
int fastpow(int x,int y,int z) {
    int ret=1;
    while(y) {
        if(y&1) ret*=x,ret%=z;
        x*=x;
        x%=z;
        y>>=1;
    }
    return ret;
}
signed main() {
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    cin>>n;
    while(n--) {
        cin>>a>>b>>c;
        b=fastpow(b,c,mod-1);
        a=fastpow(a,b,mod);
        cout<<a<<'\n';
    }
}