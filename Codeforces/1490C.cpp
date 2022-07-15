#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios_base::sync_with_stdio(false),cin.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        bool flag=false;
        cin>>n;
        for(int i=1;i*i*i<=n;i++) {
            int a=i*i*i,b=n-a;
            int tmp=cbrt(b);
            if(tmp*tmp*tmp!=b || b==0) continue;
            else {
                flag=1;
                break;
            }
        }
        if(flag) puts("YES");
        else puts("NO");
    }
}