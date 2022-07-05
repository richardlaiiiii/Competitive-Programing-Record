#include <iostream>
#include <sstream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string x,y;
    int d1,d2;
    cin>>x>>y;
    stringstream ss;
    ss<<x;
    ss>>d1;
    ss.clear();
    ss.str("");
    ss<<y;
    ss>>d2;
    if(d1>d2) cout<<x<<'\n';
    else if(d2>d1) cout<<y<<'\n';
    else {
        for(int i=0;;i++) {
            if(x[i]>y[i]) {
                cout<<x<<'\n';
                break;
            }else if(x[i]<y[i]) {
                cout<<y<<'\n';
                break;
            }
        }
    }
}