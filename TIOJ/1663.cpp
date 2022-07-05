#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,a,b;
    while(cin>>t>>a>>b){
        switch (t)
        {
        case 1:
            cout<<a+b<<'\n';
            break;
        case 2:
            cout<<a-b<<'\n';
            break;
        case 3:
            cout<<a*b<<'\n';
            break;
        case 4:
            cout<<a%b<<'\n';
            break;
        default:
            break;
        }
    }
}