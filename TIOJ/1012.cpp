#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
using namespace std;
int n,m;
vector<int> sta,rep;
signed main() {
    fastio;
    cin >> n >> m;
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        while(!rep.empty()) sta.push_back(rep.back()),rep.pop_back();
        if(sta.empty() || a > sta.back()) 
        {
            for(int j = cnt+1; j <= a; j++) sta.push_back(j);
            cnt = a;
        }
        if(sta.back() == a) sta.pop_back();
        else
        {
            for(int j = 0; j < m && sta.back() != a; j++) 
                rep.push_back(sta.back()), sta.pop_back();
            if(sta.back() == a) sta.pop_back();
            else {cout << "no\n";return 0;}
        }
    }
    cout << "yes\n";
}