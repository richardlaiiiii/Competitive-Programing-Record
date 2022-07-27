#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define int long long
using namespace std;
bool prime[5001];
signed main() {
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<5001;i++) prime[i]=true;
    prime[0]=prime[1]=false;
    for(int i=2;i<=5000;i++) {
        if(prime[i]) {
            for(int j=2*i;j<=5000;j+=i) {
                prime[j]=false;
            }
        }
    }
    if(prime[n]) {
        for(int i=n;i>=1;i--) {
            if(prime[i]) cout<<i<<" ";
        }
    }else {
        for(int i=n;i>=1;i--) {
            if(!prime[i]) cout<<i<<" ";
        }
    }
    cout<<'\n';
}