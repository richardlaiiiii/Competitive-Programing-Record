#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios_base::sync_with_stdio(false),cin.tie(0);
    int n;
    while(cin>>n) {
        int a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++) {
            printf("%d ",a[i]);
        }
        printf("%d\n",a[n-1]);
    }
}