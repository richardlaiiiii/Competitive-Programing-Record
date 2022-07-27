#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
using namespace std;
deque<int> dq;
int n,x,a=0,b=0;
bool now=true;
signed main() {
    fastio;
    cin>>n;
    for(int i=0;i<n;i++) cin>>x,dq.push_back(x);
    for(int i=0;i<n;i++) {
        if(now) {
            if(dq.back()>dq.front()) {
                a+=dq.back();
                dq.pop_back();
            }else {
                a+=dq.front();
                dq.pop_front();
            }
            now=false;
        }else {
            if(dq.back()>dq.front()) {
                b+=dq.back();
                dq.pop_back();
            }else {
                b+=dq.front();
                dq.pop_front();
            }
            now=true;
        }
    }
    if(a<b) swap(a,b);
    cout<<a<<" "<<b<<'\n';
}