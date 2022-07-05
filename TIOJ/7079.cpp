#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
int main() {
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n,reply;
    cin>>n;
    int l=1,r=n,m=(l+r)>>1;
    cout<<m<<'\n';
    while(cin>>reply,reply) {
        if(reply==1) {
            r=m;
        }else {
            l=m+1;
        }
        m=(l+r)>>1;
        cout<<m<<'\n';
    }
}