#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n;
    cin>>n;
    while(n!=1) {
        cout<<n<<" ";
        if(n&1) n=3*n+1;
        else n>>=1;
    }
    cout<<"1\n";
}