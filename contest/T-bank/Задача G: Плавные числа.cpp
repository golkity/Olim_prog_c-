#include "bits-stdc++.h"
using namespace std;
#define i64 int64_t
typedef vector<i64> vi;
typedef vector<vector<i64>> vvi;
int main(){
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    int n;
    cin >> n;
    vvi dp(10, vi(n + 1, 0));

    for (int d = 1; d <= 9; d++) {
        dp[d][1] = 1;
    }
    for (int len = 2; len <= n; len++) {
        for (int d = 0; d <= 9; d++) {
            if (d > 0) dp[d][len] += dp[d - 1][len - 1];
            dp[d][len] += dp[d][len - 1];
            if (d < 9) dp[d][len] += dp[d + 1][len - 1];
        }
    }
    long long result = 0;
    for (int d = 0; d <= 9; d++) {
        result += dp[d][n];
    }

    cout << result << '\n';

    return 0;
}
