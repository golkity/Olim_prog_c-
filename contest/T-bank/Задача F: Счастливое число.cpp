#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vi;
typedef set<int> si;
int countPairs(vector<int>& arr, int k) {
    unordered_map<int, int> countMap;
    int pairCount = 0;
    for (int num : arr) {
        int complement = k - num;
        if (countMap.find(complement) != countMap.end()) {
            pairCount += countMap[complement];
        }
        countMap[num]++;
    }
    return pairCount;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        cout << countPairs(arr, k) <<'\n';
    }
    return 0;
}
