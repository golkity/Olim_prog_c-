#include "bits-stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));
    vector<vector<int>> dp(n, vector<int>(m));
    vector<vector<char>> path(n, vector<char>(m, ' '));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    dp[0][0] = grid[0][0];

    for (int j = 1; j < m; j++) {
        dp[0][j] = dp[0][j - 1] + grid[0][j];
        path[0][j] = 'R';
    }

    for (int i = 1; i < n; i++) {
        dp[i][0] = dp[i - 1][0] + grid[i][0];
        path[i][0] = 'D';
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (dp[i - 1][j] > dp[i][j - 1]) {
                dp[i][j] = dp[i - 1][j] + grid[i][j];
                path[i][j] = 'D';
            } else {
                dp[i][j] = dp[i][j - 1] + grid[i][j];
                path[i][j] = 'R';
            }
        }
    }

    cout << dp[n - 1][m - 1] <<'\n';

    string result;
    int i = n - 1, j = m - 1;
    while (i > 0 || j > 0) {
        result += path[i][j];
        if (path[i][j] == 'D') {
            i--;
        } else {
            j--;
        }
    }

    reverse(result.begin(), result.end());
    for (size_t k = 0; k < result.size(); k++) {
        cout << result[k];
        if (k != result.size() - 1) {
            cout << " ";
        }
    }
    cout << '\n';

    return 0;
}
