#include <iostream>
#include <cstring>
#pragma GCC optimize("Ofast")
using namespace std;
int alpha[30],n,k,mx;
string s;
int main() {
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    cin>>n;
    while(n--) {
        mx=0;
        memset(alpha,0,sizeof(alpha));
        cin>>k>>s;
        for(int i=0;i<k;i++) alpha[s[i]-'a']++,mx=max(mx,alpha[s[i]-'a']);
        for(int i=1;i<26;i++) {
            if(alpha[i]==mx) cout<<char(i+'a');
        }
        cout<<'\n';
    }
}