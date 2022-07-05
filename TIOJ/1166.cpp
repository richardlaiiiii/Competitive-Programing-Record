#include <iostream>
using namespace std;
int gcd(int x,int y) {
    if(y==0) return x;
    return gcd(y,x%y);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a,b;
    while(cin>>a>>b) {
        if(a==0 && b==0) break;
        cout<<gcd(a,b)<<'\n';
    }
}