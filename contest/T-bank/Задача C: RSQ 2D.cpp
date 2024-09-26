#include "bits-stdc++.h"
using namespace std;
typedef vector<int64_t> vi64;
typedef vector<vector<int64_t>> vii64;
#define i64 int64_t
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n, m, q;
    cin >> n >> m;
    vii64 a(n + 1, vi64(m + 1, 0));
    vii64 prefix(n + 1, vi64(m + 1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> a[i][j];
            prefix[i][j] = a[i][j] + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
        }
    }
    cin >> q;
    while (q--) {
        int lx, ly, rx, ry;
        cin >> lx >> ly >> rx >> ry;
        i64 sum = prefix[rx][ry] - prefix[lx - 1][ry] - prefix[rx][ly - 1] + prefix[lx - 1][ly - 1];
        cout << sum << " ";
    }
    cout << endl;
    return 0;
}
