#pragma GCC optimize("Ofast")
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
using namespace std;
int main() {
    fastio;
    string s;
    vector<int> arr;
    stringstream ss;
    int sum;
    while(getline(cin,s) && s!="0") {
        arr.clear();
        ss.str("");
        ss.clear();
        sum=0;
        ss<<s;
        while(true) {
            int x;
            ss>>x;
            if(ss.fail()) break;
            arr.push_back(x);
            sum+=x;
        }
        cout<<arr[0]<<' '<<(int)arr.size()-1<<' '<<sum<<'\n';
    }
}