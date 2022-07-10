#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
int a,b,x1,x2,n,mod=1e9+7;
struct mat{
    int a[2][2];
    mat() {
        memset(a,0,sizeof(a));
    }
    mat operator * (const mat &b) const {
        mat ret;
        for(int i=0;i<2;i++) {
            for(int j=0;j<2;j++) {
                for(int k=0;k<2;k++) {
                    ret.a[i][j]=(ret.a[i][j]+a[i][k]*b.a[k][j])%mod;
                }
            }
        }
        return ret;
    }
};
signed main() {
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    while(cin>>x1>>x2>>a>>b>>n) {
        mat ret;
        ret.a[0][0]=x1;
        ret.a[1][0]=x2;
        mat k;
        k.a[0][0]=0;
        k.a[0][1]=1;
        k.a[1][0]=a;
        k.a[1][1]=b;
        n--;
        while(n) {
            if(n&1) ret=ret*k;
            k=k*k;
            n>>=1;
        }
        cout<<ret.a[0][0]<<'\n';
    }
}