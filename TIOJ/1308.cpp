#include <iostream>
#include <cstring>
using namespace std;
long long dp[51][51];
long long C(int n,int m)
{
    if(dp[n][m]!=-1)return dp[n][m];
    if(n==m||m==0)return 1;
    return dp[n][m]=C(n-1,m-1)+C(n-1,m);
}
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    memset(dp,-1,sizeof dp);
    int n,m;
    while(cin>>n>>m,n){
        cout<<C(n+m-1,m)<<'\n';
    }
}