#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
typedef long long ll;
using namespace std;
string s;
int leaf,depth,ans,cnt[100005],d;
int main() {
    fastio;
    while(cin>>s) {
        leaf=depth=ans=0;
        d=1;
        memset(cnt,0,sizeof(cnt));
        for(auto c:s) {
            if(c=='*') cnt[d]++,leaf++;
            else if(c=='(') cnt[d]++,d++;
            else cnt[d--]=0;
            if(d>1) ans=max(ans,cnt[d]),depth=max(depth,d);
        }
        cout<<leaf<<' '<<depth<<' '<<ans<<'\n';
    }
    return 0;
}