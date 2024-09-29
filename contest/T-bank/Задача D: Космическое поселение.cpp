#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vi;
#define i64 int64_t
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    i64 n, a, b, w, h,x;
    cin>>n>>a>>b>>w>>h;
    i64 l = 0;
    i64 r = min(w, h);
    while(l + 1 < r)
    {
        i64 m = (l + r) / 2;
        x = max((w / (a + 2 * m)) * (h / (b + 2 * m)), (h / (a + 2 * m)) * (w / (b + 2 * m)));
        if (x >= n)
            l = m;
        else
            r = m;
    }
    cout<<l;
}
