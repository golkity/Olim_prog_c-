#include "bits/stdc++.h"

using namespace std;
typedef vector<int64_t> vi;
typedef vector<vector<int>> vii;
typedef vector<string> vs;
typedef vector<char> vc;
#define ll long long
#define i64 int64_t

int64_t Revenue(vector<int64_t>&prices,vector<int64_t>&clicks) {
    if (prices.empty()) {
        return 0;
    }
    int64_t price = prices.back();
    int64_t click = clicks.back();
    prices.pop_back();
    clicks.pop_back();
    return price * click + Revenue(prices, clicks);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int64_t> prices(n), clicks(n);
    for (auto& price : prices) {
        cin >> price;
    }
    for (auto& click : clicks) {
        cin >> click;
    }
    sort(prices.begin(), prices.end());
    sort(clicks.begin(), clicks.end());
    cout << Revenue(prices, clicks) << "\n";
    return 0;
}
