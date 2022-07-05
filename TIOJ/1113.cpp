#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;
string s;
bool taken[8];
vector<string> ans;
void dfs(string now) {
    if(now.length()==s.length()) {
        ans.push_back(now);
        return;
    }
    for(int i=0;i<s.length();i++) {
        if(!taken[i]) {
            taken[i]=1;
            dfs(now+s[i]);
            taken[i]=0;
        }
    }
}
int main() {
    fast;
    while(cin>>s) {
        sort(s.begin(),s.end());
        memset(taken,0,sizeof(taken));
        ans.clear();
        dfs("");
        for(auto i:ans) cout<<i<<'\n';
        cout<<'\n';
    }
}