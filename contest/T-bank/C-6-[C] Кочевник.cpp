#include "bits-stdc++.h"
using namespace std;
typedef vector<pair<int,int>> vpp;
bool cmp(int x, int y, int x2, int y2) {
    return abs(x - x2) == abs(y - y2);
}
int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    vpp moves = {
            {-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}
    };
    for (auto move : moves) {
        int nx = x1 + move.first;
        int ny = y1 + move.second;
        if (nx >= 1 && nx <= 8 && ny >= 1 && ny <= 8) {
            if (cmp(nx, ny, x2, y2)) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}
