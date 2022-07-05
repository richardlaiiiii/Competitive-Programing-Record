#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n,x;
    cin>>n>>x;
    int arr[n],ck[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        ck[i]=arr[i];
    }
    sort(arr,arr+n);
    int l=0,r=n-1,s;
    while(l<r) {
        s=arr[l]+arr[r];
        if(s==x) break;
        else if(s<x) l++;
        else r--;
    }
    if(s==x) {
        for(int i=0;i<n;i++) {
            if(ck[i]==arr[l]) cout<<i+1<<" ";
        }
        for(int i=0;i<n;i++) {
            if(ck[i]==arr[r]) cout<<i+1<<"\n";
        }
    }else {
        cout<<"IMPOSSIBLE\n";
    }
}