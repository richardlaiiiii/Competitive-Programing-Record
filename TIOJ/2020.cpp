#pragma GCC opitmize("Ofast")
#include <iostream>
int N, M;
int dp[105][105];
int kamiori(int x, int y) {
    if (x == y) {
        dp[x][y] = 1;
        return 1;
    }
    if (dp[x][y]) return dp[x][y];
    int ret = 1e9;
    for (int i=1; i<x; i++)
        ret = std::min(ret, kamiori(i, y) + kamiori(x-i, y));
    for (int i=1; i<y; i++)
        ret = std::min(ret, kamiori(x, i) + kamiori(x, y-i));
    dp[x][y] = ret;
    return ret;
} 
signed main() {
    scanf("%d%d",&N,&M);
    if(N==M) puts("1\n");
    else if(N%M==0) printf("%d\n",N/M);
    else if(M%N==0) printf("%d\n",M/N);
    else printf("%d\n",kamiori(N,M));
}