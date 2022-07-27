#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    string s;
    while(getline(cin,s)) {
        int maxx=0;
        for(int i=0;i<s.length();i++) {
            for(int j=i+maxx;j<s.length();j++) {
                bool ok=true;
                for(int m=i,n=j;m<n;m++,n--) {
                    if(s[m]!=s[n]) {
                        ok=false;
                        break;
                    }
                }
                if(ok) maxx=max(maxx,j-i+1);
            }
        }
        printf("%d\n",maxx);
    }
}