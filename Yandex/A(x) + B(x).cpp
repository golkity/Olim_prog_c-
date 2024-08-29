#include "bits/stdc++.h"

using namespace std;
typedef vector<int> vi;

int main() {
    int n;
    scanf("%d", &n);
    vi a_x(n + 1);
    for (int i = 0; i <= n; ++i) {
        scanf("%d", &a_x[i]);
    }

    int m;
    scanf("%d", &m);
    vi b_x(m + 1);
    for (int i = 0; i <= m; ++i) {
        scanf("%d", &b_x[i]);
    }

    int k = max(n, m);
    vi result(k + 1, 0);

    for (int i = 0; i <= n; ++i) {
        result[k - n + i] += a_x[i];
    }
    for (int i = 0; i <= m; ++i) {
        result[k - m + i] += b_x[i];
    }

    while (k > 0 && result[k] == 0) {
        --k;
    }

    printf("%d\n", k);
    for (int i = 0; i <= k; ++i) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
