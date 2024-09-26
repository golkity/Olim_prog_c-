#include "bits-stdc++.h"
using namespace std;
typedef vector<int64_t> vi64;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n, q;
    cin >> n;
    vi64 a(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        int num;
        cin >> num;
        a[i] = a[i - 1] + num;
    }
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << a[r] - a[l - 1] << " ";
    }
    return 0;
}
