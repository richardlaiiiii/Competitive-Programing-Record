#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n;
    cin>>n;
    int dp[n]={INT_MAX},a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    dp[0]=0;
    dp[1]=abs(a[1]-a[0]);
    for(int i=2;i<n;i++) {
        dp[i]=min(dp[i-1]+abs(a[i]-a[i-1]),dp[i-2]+abs(a[i]-a[i-2]));
    }
    cout<<dp[n-1]<<'\n';
    return 0;
}