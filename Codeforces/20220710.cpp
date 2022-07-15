#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define int long long
using namespace std;
int lenN(int n) {
    int res=1;
    while(n>10) {
        res++;
        n/=10;
    }
    return res;
}
int fastpow(int a,int b) {
    int res=1;
    while(b>0) {
        if(b&1) res*=a;
        a*=a;
        b>>=1;
    }
    return res;
}
signed main() {
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int t;
    string s;
    cin>>t;
    while(t--) {
        cin>>s;
        if(s.length()==1) {
            cout<<"1\n";
            continue;
        }
        set<char> st;
        int days=0;
        int i=0;
        for(int i=0;i<s.length();i++) {
            if(st.size()!=3) st.insert(s[i]);
            else {
                st.clear();
                days++;
            }
        }
        if(!st.empty()) days++;
        cout<<days<<'\n';
    }
}