#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    string s;
    vector<string> v;
    while(cin>>n>>k) {
        while(n--) {
            cin>>s;
            v.push_back(s);
        }
        cout<<v[v.size()-k]<<'\n';
        v.clear();
    }
}