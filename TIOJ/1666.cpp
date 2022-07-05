#include <iostream>
#pragma GCC optimize("Ofast")
using namespace std;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int a,b;
    while(cin>>a>>b){
        if(a==b){
            cout<<"yiping\n";
        }else{
            cout<<"kelvin\n";
        }
    }
}