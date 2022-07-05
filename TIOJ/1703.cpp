#include<iostream>
#pragma GCC optimize("Ofast")
using namespace std;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n,cnt,a;
    while(cin>>n){
        cnt=0;
        a=1;
        while(a<=n)a*=3,cnt+=n/a;
        cout<<cnt<<'\n';
    }
}