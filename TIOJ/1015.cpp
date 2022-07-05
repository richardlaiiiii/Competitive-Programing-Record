#include <iostream>
using namespace std;
main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a,b;
    while(cin>>a>>b) {
        if(a==0 && b==0) break;
        long long sum=0;
        while(a*b!=0) {
            sum+=a*b;
            --a;
            --b;
        }
        cout<<sum<<'\n';
    }
}