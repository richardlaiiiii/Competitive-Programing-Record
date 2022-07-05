#pragma GCC optimize("Ofast")
#include <iostream>
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
using namespace std;
int m,n,cnt;
int main() {
    fastio;
    bool prime[10000005]={true};
    prime[0]=prime[1]=false;
    for(int i=2;i<10000005;i++) {
        if(prime[i]) {
            for(long long j=i*i;j<10000005;j+=i) prime[j]=false;
        }
    }
    cin>>m>>n;
    while(m--) {
        cin>>n;
        cnt=0;
        for(int i=1;i<=n;i++) {
            if(prime[i]) cnt++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}