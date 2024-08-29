#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vi;

int partition(vi& a, int l, int h) {
    int p = a[l];
    int i = l;
    for (int j = l + 1; j <= h; ++j) {
        if (a[j] <= p) {
            ++i;
            swap(a[i], a[j]);
        }
    }
    swap(a[l], a[i]);
    return i;
}

int main() {
    int n;
    scanf("%d", &n);
    vi a(n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    partition(a, 0, n - 1);
    for (auto elem : a) {
        printf("%d ", elem);
    }
    printf("\n");

    return 0;
}
