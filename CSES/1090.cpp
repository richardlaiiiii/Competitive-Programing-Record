#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5;
int n,x,p[maxn];
bool f[maxn]={0};
int i,j,ans=0;
signed main() {
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    cin>>n>>x;
    for(int i=0;i<n;i++) {
        cin>>p[i];
    }
    sort(p,p+n);
    i=0,j=n-1;
    while(i<j) {
        if(p[i]+p[j]>x) j--;
        else ans++,f[i]=f[j]=1,i++,j--;
    }
    for(int i=0;i<n;i++) {
        ans+=(f[i]==0);
    }
    cout<<ans<<'\n';
}