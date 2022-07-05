#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
int a[50]={0},b[50]={0},c[50]={0};
string x,y;
int main() {
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    cin>>x>>y;
    for(int i=x.length()-1;i>=0;i--) a[x.length()-i-1]=x[i]-'0';
    for(int i=y.length()-1;i>=0;i--) b[y.length()-i-1]=y[i]-'0';
    int r=max(x.length(),y.length());
    for(int i=0;i<r;i++) {
        c[i]+=a[i]+b[i];
        int tmp;
        if(c[i]>=10) {
            tmp=c[i]/10;
            c[i+1]+=tmp;
            c[i]-=10;
        }
    }
    int o=49;
    while(c[o]==0) o--;
    for(int i=o;i>=0;i--) cout<<c[i];
    cout<<'\n';
}