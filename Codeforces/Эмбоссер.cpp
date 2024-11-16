#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>
#define i64 int64_t
using namespace std;
struct item {
    int index;
    i64 price;
    i64 quantity;
};
typedef vector<item> vi;
typedef vector<i64> vi64;
i64 dp(i64 t, i64 c, i64 k) {
    i64 l = c;
    i64 r = t * 2;
    while (l < r) {
        i64 m = (l + r) / 2;
        i64 f = m / k;
        if (m + f >= t) {
            r = m;
        } else {
            l = m + 1;
        }
    }
    return l;
}
bool cmp1(const item &a, const item &b) {
    return a.price > b.price;
}
bool cmp2(const item &a, const item &b) {
    return a.price < b.price;
}

int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    long long n, k, p;
    cin >> n >> k >> p;
    vi ip;
    vi ig;
    i64 t = 0;
    i64 cb = 0;
    i64 cm = 0;
    vi64 ai(n);
    vi64 ci(n);
    for (int i = 0; i < n; ++i) {
        cin >> ai[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> ci[i];
        t += ci[i];

        if (ai[i] > p) {
            cb += ci[i];
            cm += ai[i] * ci[i];
            ig.push_back({i, ai[i], ci[i]});
        } else {
            ip.push_back({i, ai[i], ci[i]});
        }
    }
    i64 x = dp(t, cb, k);

    i64 xp = x - cb;
    sort(ip.begin(), ip.end(), cmp2);
    vi64 v(n, 0);
    i64 cp = 0;
    for (const auto &item : ip) {
        if (xp == 0) break;
        i64 qb = min(item.quantity, xp);
        v[item.index] += qb;
        cp += qb * item.price;
        xp -= qb;
    }
    i64 y = x / k;
    i64 tf = 0;
    sort(ip.begin(), ip.end(),cmp1);
    for (const auto &item : ip) {
        if (tf == y) break;
        i64 qn = item.quantity - v[item.index];
        i64 qa = min(qn, y - tf);
        v[item.index] += qa;
        tf += qa;
    }
    i64 to = 0;
    for (int i = 0; i < n; ++i) {
        to += v[i];
    }
    to += cb;
    if (to < t) {
        return 0;
    }
    i64 res = cm + cp;

    cout << res << '\n';
    return 0;
}
