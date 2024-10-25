#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

void factorize(int n, int m, vi& v, vvi& result) {
    if (n == 1) {
        result.push_back(v);
        return;
    }
    for (int i = m; i <= n; ++i) {
        if (n % i == 0) {
            v.push_back(i);
            factorize(n / i, i, v, result);
            v.pop_back();
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    vvi result;
    vi v;
    factorize(N, M, v, result);
    sort(result.begin(), result.end());
    for (const auto& factors : result) {
        for (size_t i = 0; i < factors.size(); ++i) {
            cout << factors[i];
            if (i < factors.size() - 1) {
                cout << "*";
            }
        }
        cout <<'\n';
    }
    return 0;
}
