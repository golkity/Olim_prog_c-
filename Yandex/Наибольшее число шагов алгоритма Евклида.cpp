#include "bits-stdc++.h"
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int64_t n;
    cin >> n;

    int64_t a = 1, b = 1;
    while (b <= n) {
        int64_t next = a + b;
        if (next > n) break;
        a = b;
        b = next;
    }
    cout << a << " " << b << "\n";
    return 0;
}
