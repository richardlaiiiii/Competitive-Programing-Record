#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,a[20],ans=1e18,t=0;
signed main() {
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i],t+=a[i];
    for(int i=0;i<(1<<n);i++) {
        int num=i,index=0,tot=0;
        while(num!=0) {
            if(num&1) tot+=a[index];
            index++;
            num>>=1;
        }
        int tot2=t-tot;
        ans=min(ans,max(tot,tot2)-min(tot,tot2));
    }
    cout<<ans<<'\n';
}