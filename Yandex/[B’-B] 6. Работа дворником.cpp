#include "bits/stdc++.h"
using namespace std;
struct pair_hash {
    template <class T1, class T2>
    size_t operator() (const pair<T1, T2>& p) const {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};
typedef unordered_set<pair<int, int>,pair_hash> uspII;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    uspII cleaned_cells;
    for (int i = 0; i < k; ++i) {
        char op;
        int value;
        cin >> op >> value;

        if (op == '+') {
            for (int i = 1; i <= n; ++i) {
                int j = value - i;
                if (j >= 1 && j <= m) {
                    cleaned_cells.insert({i, j});
                }
            }
        } else if (op == '-') {
            for (int i = 1; i <= n; ++i) {
                int j = i - value;
                if (j >= 1 && j <= m) {
                    cleaned_cells.insert({i, j});
                }
            }
        }
    }

    cout << cleaned_cells.size() << endl;

    return 0;
}
