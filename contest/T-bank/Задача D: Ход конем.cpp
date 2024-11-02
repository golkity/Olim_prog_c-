#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    int n, m;
    cin >> n >> m;

    vii dp(n, vi(m, 0));
    dp[0][0] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i - 2 >= 0 && j - 1 >= 0) {
                dp[i][j] += dp[i - 2][j - 1];
            }
            if (i - 1 >= 0 && j - 2 >= 0) {
                dp[i][j] += dp[i - 1][j - 2];
            }
        }
    }

    cout << dp[n - 1][m - 1] << '\n';

    return 0;
}
