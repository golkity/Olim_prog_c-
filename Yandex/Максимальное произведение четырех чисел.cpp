#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vi;

int64_t maxProd(vi& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int64_t max1 = 1LL * arr[n-1] * arr[n-2] * arr[n-3] * arr[n-4];
    int64_t max2 = 1LL * arr[0] * arr[1] * arr[2] * arr[3];
    int64_t max3 = 1LL * arr[0] * arr[1] * arr[n-1] * arr[n-2];
    int64_t max4 = 1LL * arr[0] * arr[1] * arr[2] * arr[n-1];
    int64_t max5 = 1LL * arr[0] * arr[n-1] * arr[n-2] * arr[n-3];

    return max({max1, max2, max3, max4, max5});
}

int main() {
    int n;
    scanf("%d", &n);
    vi arr(n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("%lld", maxProd(arr));
    return 0;
}
