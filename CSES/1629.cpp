#pragma GCC optimize("Ofast")
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
signed main() {
    int n,a,b;
    scanf("%d",&n);
    vector< pair<int,int> > v;
    while(n--) scanf("%d %d",&a,&b),v.push_back({a,b});
    sort(v.begin(),v.end(),[&](pair<int,int> x, pair<int,int> y){
        return x.second<y.second;
    });
    int now=0,ans=0;
    for(auto it:v) {
        if(it.first>=now) ans++,now=it.second;
    }
    printf("%d",ans);
}