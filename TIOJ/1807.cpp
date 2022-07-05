#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
map<pii,int> mp;
int a,b,m,n;
int main() {
    cin>>m>>n;
    while(n-- && cin>>a>>b) {
        if(a==b) {
            cout<<"YES\n";
            return 0;
        }else {
            if(a>b) swap(a,b);
            if(mp[pii{a,b}]++) {
                cout<<"YES\n";
                return 0;
            }
        }
    }
    cout<<"yes\n";
    return 0;
}