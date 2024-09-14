#include "bits-stdc++.h"
using namespace std;
typedef vector<int64_t> v64;

int PointsCover(vector<int64_t>& points, int64_t L) {
    sort(points.begin(), points.end());
    int64_t n = points.size();
    int64_t count = 0;
    int64_t i = 0;

    while (i < n) {
        count++;
        int64_t start = points[i];
        while (i < n && points[i] <= start + L ) {
            i++;  
        }
    }

    return count;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int64_t n, L;
    cin >> n >> L;
    vector<int64_t> points(n);

    for (int64_t i = 0; i < n; ++i) {
        cin >> points[i];
    }

    cout << PointsCover(points, L) << "\n";

    return 0;
}
