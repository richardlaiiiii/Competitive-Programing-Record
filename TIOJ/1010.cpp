#include <bits/stdc++.h>
#pragma GCC optinize("O3,unroll-loops")
using namespace std;
string a,b;
int lena,lenb;
bool cmp(int l) {
    for(int i=0;i<l;i++) {
        if(a[i]!=b[lenb-l+i]) return 0;
    }
    return 1;
}
int main() {
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    cin>>a>>b;
    lena=a.size();
    lenb=b.size();
    int ans=0;
    for(int i=1;i<=lena&&i<=lenb;i++) {
        if(cmp(i)) ans=i;
    }
    cout<<ans<<'\n';
}