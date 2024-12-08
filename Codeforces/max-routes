#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int arr[100][100];
    int n, m;
    std::cin >> n >> m;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            std::cin >> arr[i][j];

    for (int i = 1; i < m; ++i)
        arr[0][i] += arr[0][i - 1];

    for (int i = 1; i < n; ++i) {
        arr[i][0] += arr[i - 1][0];
        for (int j = 1; j < m; ++j)
            arr[i][j] += std::max(arr[i - 1][j], arr[i][j - 1]);
    }

    std::cout << arr[n - 1][m - 1] << '\n';
    std::vector<char> path;
    path.reserve(n + m - 2);

    for (int i = n - 1, j = m - 1; path.size() < n + m - 2;)
        if (i == 0) {
            path.insert(path.end(), j, 'R');
        } else if (j == 0) {
            path.insert(path.end(), i, 'D');
        } else if (arr[i - 1][j] > arr[i][j - 1]) {
            path.push_back('D');
            --i;
        } else {
            path.push_back('R');
            --j;
        }

    for (auto it = path.crbegin(); it < path.crend(); ++it)
        std::cout << *it << ' ';

    return 0;
}
