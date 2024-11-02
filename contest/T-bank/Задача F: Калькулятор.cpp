#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vi;
int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    int n;
    cin >> n;
    vi dp(n + 1, 0);
    vi prev(n + 1, -1);

    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + 1;
        prev[i] = i - 1;

        if (i % 2 == 0 && dp[i] > dp[i / 2] + 1) {
            dp[i] = dp[i / 2] + 1;
            prev[i] = i / 2;
        }

        if (i % 3 == 0 && dp[i] > dp[i / 3] + 1) {
            dp[i] = dp[i / 3] + 1;
            prev[i] = i / 3;
        }
    }

    cout << dp[n] << '\n';

    vi path;
    for (int i = n; i != -1; i = prev[i]) {
        path.push_back(i);
    }

    for (int i = path.size() - 1; i >= 0; --i) {
        cout << path[i] << " ";
    }
    cout << '\n';

    return 0;
}
