#include <bits/stdc++.h>
using namespace std;
main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,i;
    long long sum=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n/2;i++) sum+=a[i];
    cout<<sum<<'\n';
}