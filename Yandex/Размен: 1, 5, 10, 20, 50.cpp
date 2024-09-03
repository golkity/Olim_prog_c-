#include "bits-stdc++.h"
using namespace std;
typedef vector<int64_t> vi;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vi coins = {50, 20, 10, 5, 1};
    vi dp(n + 1, INT_MAX);
    vi last_coin(n + 1, -1);
    dp[0] = 0;

    for (int coin : coins) {
        for (int i = coin; i <= n; ++i) {
            if (dp[i - coin] != INT_MAX && dp[i - coin] + 1 < dp[i]) {
                dp[i] = dp[i - coin] + 1;
                last_coin[i] = coin;
            }
        }
    }

    cout << dp[n] << "\n";

    vi result;
    for (int i = n; i > 0; i -= last_coin[i]) {
        result.push_back(last_coin[i]);
    }
    
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i != result.size() - 1) cout << " ";
    }
    cout << "\n";

    return 0;
}
