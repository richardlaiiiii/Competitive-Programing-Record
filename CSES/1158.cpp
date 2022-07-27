#include <iostream>
using namespace std;
  
int n, x, dp[100005], h[1005], s[1005];
  
int main() {
    cin >> n >> x;
    for (int i = 0; i < n; i++){
        cin >> h[i];
    }
    for (int i = 0; i < n; i++){
        cin >> s[i];
        for (int j = x; j >= h[i]; j--){
            dp[j] = max(dp[j], dp[j-h[i]]+s[i]);
        }
    }
    cout << dp[x];
}