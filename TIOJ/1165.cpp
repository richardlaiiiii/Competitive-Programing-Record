#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a,b,c;
    while(cin>>a>>b>>c) {
        int sum=a+b+c;
        if((a<<1)==sum || (b<<1)==sum || (c<<1)==sum) cout<<"Good Pair\n";
        else cout<<"Not Good Pair\n";
    }
}