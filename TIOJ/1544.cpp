#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s1,s2;
    int t;
    cin>>t;
    while(t--) {
        cin>>s1>>s2;
        if(s1.size()>s2.size()) cout<<"0\n";
        else if(s1.size()<s2.size() || s1==s2) cout<<"1\n";
        else {
            for(int i=0;i<s1.size();i++) {
                if(s1[i]>s2[i]) {
                    cout<<"0\n";
                    break;
                }else if(s1[i]<s2[i]) {
                    cout<<"1\n";
                    break;
                }
            }
        }
    }
}