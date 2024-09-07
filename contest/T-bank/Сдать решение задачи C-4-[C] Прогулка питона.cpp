#include "bits-stdc++.h"
using namespace std;
typedef vector<vector<char>> vecC;
typedef vector<pair<int,int>> vpp;
typedef vector<char> vc;

void f(int k,int x,int n){
    int row = 0, col = 0;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};

    int dir = 0;
    int length = x;

    int min_row = 0, max_row = 0, min_col = 0, max_col = 0;

    vpp path = {{row, col}};

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < length; j++) {
            row += dy[dir];
            col += dx[dir];
            path.push_back({row, col});
            min_row = min(min_row, row);
            max_row = max(max_row, row);
            min_col = min(min_col, col);
            max_col = max(max_col, col);
        }
        dir = (dir + 1) % 4;
        length *= k;
    }
    int rows = max_row - min_row + 1;
    int cols = max_col - min_col + 1;

    vecC grid(rows, vc(cols, '.'));

    for (auto [r, c] : path) {
        grid[r - min_row][c - min_col] = '#';
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << grid[i][j];
        }
        cout << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int k,x,n;
    cin>>k>>x>>n;
    f(k,x,n);
    return 0;
}
