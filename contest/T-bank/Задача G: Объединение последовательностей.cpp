#include "bits-stdc++.h"
using namespace std;
typedef vector<int64_t> vi64;
typedef vector<vector<int64_t>> vii64;
#define i64 int64_t
#define ui64 uint64_t
int const min_i = -1;
ui64 const e = 1.0e-6;
ui64 f(i64 k) {
    ui64 m, a2, a3, a6, cnt;
    ui64 lo = 1;
    ui64 hi = k*k;
    while (hi > lo) {
        m = (lo + hi) >> 1;
        a2 = (uint64_t) pow((m+e), 1.0/2);
        a3 = (uint64_t) pow((m+e), 1.0/3);
        a6 = (uint64_t) pow((m+e), 1.0/6);
        cnt = a2 + a3 - a6;
        if (cnt < k)
            lo = m + 1;
        else
            hi = m;
    }
    return lo;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    i64 x;
    cin >> x;
    cout<<f(x);
    return 0;
}
