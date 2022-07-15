#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n;
    cin>>n;
    int ans=INT_MIN;
    for(int a=0;a<=n;a++) {
        for(int b=0;b<=n;b++) {
            int c=n-a-b;
            if(c<0) continue;
            int tmp;
            tmp=2022+abs(b-c)+a*b+b*c+c*c-abs(b*b-a*a);
            ans=max(ans,tmp);
        }
    }
    cout<<ans<<'\n';
}