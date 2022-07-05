#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    string day;
    cin>>day>>n;
    string wk[8]={"0","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    map<string,int> mp;
    mp["Monday"]=1;
    mp["Tuesday"]=2;
    mp["Wednesday"]=3;
    mp["Thursday"]=4;
    mp["Friday"]=5;
    mp["Saturday"]=6;
    mp["Sunday"]=7;
    int x=(mp[day]+n%7)%7;
    if(x==0) cout<<"Sunday\n";
    else cout<<wk[x]<<'\n';
}