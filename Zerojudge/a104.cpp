#pragma GCC optimize("Ofast")
#include <iostream>
using namespace std;
signed main() {
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n;
    cin>>n;
    int sum=0,now=1;
    for(int i=0;i<n;i++) {
        sum+=now*now;
        now*=2;
    }
    cout<<sum<<'\n';
}