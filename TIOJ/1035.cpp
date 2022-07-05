#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
using namespace std;
string s1,s2;
int ans=0,cnt;
int main() {
    fastio;
    cin>>s1>>s2;
    int lens1=s1.length();
    int lens2=s2.length();
    for(int i=0;i<lens1;i++) {
        cnt=0;
        for(int j=0;j+i<lens2;j++) {
            if(s1[j]==s2[j+i]) cnt++;
        }
        ans=max(ans,cnt);
    }
    for(int i=0;i<lens2;i++) {
        cnt=0;
        for(int j=0;j+i<lens1;j++) {
            if(s2[j]==s1[j+i]) cnt++;
        }
        ans=max(ans,cnt);
    }
    cout<<ans<<'\n';
    return 0;
}