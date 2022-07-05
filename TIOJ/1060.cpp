#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
int hr[6]={-1,-1,2,5,5,2};
int h(int y){
    if(y<0) return -1;
    return hr[y%6];
}
int g(int z){
    if(z<=2) return z*z-1;
    return 2;
}
int f(int x){
    if(x>h(x)) return f(x-1)-h(x);
    else if(x<h(x)) return f(g(x))-g(x);
    return 1;
}
int main() {
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int N;
    cin>>N;
    cout<<f(N)<<'\n';
}