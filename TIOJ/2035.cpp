#include <iostream>
using namespace std;
typedef long long ll;
ll fastpow(ll a,ll b){
    ll ans=1;
    while(b>0){
        if(b&1) ans*=a;
        a*=a;
        b>>=1;
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll b,n;
    cin>>b>>n;
    
}