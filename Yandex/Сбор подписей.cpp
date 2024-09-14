#include "bits-stdc++.h"
using namespace std;
typedef vector<pair<int,int>> vpii;
typedef vector<int64_t> v64;
#define i64 int64_t

bool compareByRight(const pair<int64_t, int64_t>& a, const pair<int64_t, int64_t>& b) {
    return a.second < b.second;
}

vector<int64_t> SegmentsCover(vector<pair<int64_t, int64_t>>& segments) {
    vector<int64_t> points;
    sort(segments.begin(), segments.end(), compareByRight);
    while (!segments.empty()) {
        int64_t r_m = segments.front().second;
        points.push_back(r_m);
        vector<pair<int64_t, int64_t>> remaining_segments;
        for (const auto& s : segments) {
            if (s.first > r_m || s.second < r_m) {
                remaining_segments.push_back(s);
            }
        }
        segments = remaining_segments;
    }
    return points;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<pair<int64_t, int64_t>> segments(n);
    for (int i = 0; i < n; ++i) {
        cin >> segments[i].first >> segments[i].second;
    }
    vector<int64_t> result = SegmentsCover(segments);
    cout << result.size() << "\n";
    for (size_t i = 0; i < result.size(); ++i) {
        if (i > 0) cout << " ";
        cout << result[i];
    }
    cout << "\n";
    return 0;
}
