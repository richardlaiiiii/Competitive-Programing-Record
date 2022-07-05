#include <iostream>
#include <cstring>
using namespace std;
  
int n, x, c[105], dp[1000005];
  
int main() {
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    memset(dp, 0x3F, sizeof(dp));
    dp[0] = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++){
        cin >> c[i];
        for (int j = 0; j+c[i] <= x; j++){
            dp[j+c[i]] = min(dp[j+c[i]], dp[j]+1);
        }
    }
    if (dp[x] > x) cout << -1 << "\n";
    else cout << dp[x] << "\n";
}