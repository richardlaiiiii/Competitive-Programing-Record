#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a,b;
    cin>>a>>b;
    if(a>b) {
        for(int i=a;i>=b;i--) {
            for(int j=0;j<i;j++) {
                cout<<'*';
            }
            cout<<'\n';
        }
    }else if(a==b){
        for(int i=0;i<a;i++) {
            cout<<'*';
        }
        cout<<'\n';
    }else {
        for(int i=a;i<=b;i++) {
            for(int j=0;j<i;j++) {
                cout<<'*';
            }
            cout<<'\n';
        }
    }
}