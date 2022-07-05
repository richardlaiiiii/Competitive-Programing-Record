#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    while(cin>>n) {
        if(n==0) break;
        int a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++) {
            cout<<a[i]<<' ';
        }
        cout<<'\n';
    }
}