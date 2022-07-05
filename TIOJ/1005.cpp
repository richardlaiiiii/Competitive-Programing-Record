#include <bits/stdc++.h>
using namespace std;
int gcd(int x,int y) {
    if(x<y) swap(x,y);
    if(y==0) return x;
    return gcd(y,x%y);
}
int main() {
    int n,a[55],cnt,c;
    while(1) {
        cin>>n;
        if(n==0) break;
        cnt=0;
        c=n*(n-1)/2;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(i==j) continue;
                if(gcd(a[i],a[j])==1) cnt++;
            }
        }
        cnt>>=1;
        if(cnt==0) {
            cout<<"No estimate for this data set.\n";
        }else {
            cout<<fixed<<setprecision(6)<<1.0*sqrt(6*c/cnt)<<'\n';
        }
    }
}