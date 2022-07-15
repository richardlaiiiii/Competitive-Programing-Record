#include <bits/stdc++.h>
using namespace std;
signed main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) {
            int m;
            cin>>m;
            string s;
            cin>>s;
            for(int j=0;j<m;j++) {
                if(s[j]=='D') a[i]=(a[i]+1)%10;
                else {
                    a[i]--;
                    if(a[i]<0) a[i]=9;
                }
            }
        }
        for(int i=0;i<n;i++) {
            cout<<a[i]<<" ";
        }
        cout<<'\n';
    }
}