#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
bool ok(const vi& coins, int index, int ts) {
    if (ts == 0) {
        return true;
    }
    if (index < 0 || ts < 0) {
        return false;
    }
    bool flag = ok(coins, index - 1, ts);
    bool oC = false;
    if (ts >= coins[index]) {
        oC = ok(coins, index - 1, ts - coins[index]);
    }
    bool tC = false;
    if (ts >= 2 * coins[index]) {
        tC = ok(coins, index - 1, ts - 2 * coins[index]);
    }
    return flag || oC || tC;
}

void f(const vector<int>& coins, int index, int ts, vi& v) {
    if (ts == 0) {
        return;
    }
    if (index < 0) {
        return;
    }
    if (ok(coins, index - 1, ts)) {
        f(coins, index - 1, ts, v);
        return;
    }
    if (ts >= coins[index] && ok(coins, index - 1, ts - coins[index])) {
        v.push_back(coins[index]);
        f(coins, index - 1, ts - coins[index], v);
        return;
    }
    if (ts >= 2 * coins[index] && ok(coins, index - 1, ts - 2 * coins[index])) {
        v.push_back(coins[index]);
        v.push_back(coins[index]);
        f(coins, index - 1, ts - 2 * coins[index], v);
        return;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    if (ok(coins, n - 1, k)) {
        cout << "Yes" << endl;
        vector<int> usedCoins;
        f(coins, n - 1, k, usedCoins);
        reverse(usedCoins.begin(),usedCoins.end());
        cout << usedCoins.size() <<'\n';
        for (int coin : usedCoins) {
            cout << coin << " ";
        }
        cout <<'\n';
    } else {
        cout << "No" << '\n';
    }
    return 0;
}
