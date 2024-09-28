#include "bits-stdc++.h"
using namespace std;
typedef vector<int64_t> vi64;
typedef vector<vector<int64_t>> vii64;
#define i64 int64_t
#define ui64 uint64_t

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n1, n2, n3, n4;
    cin >> n1;
    vector<int> caps(n1);
    for (int i = 0; i < n1; ++i) cin >> caps[i];
    cin >> n2;
    vector<int> shirts(n2);
    for (int i = 0; i < n2; ++i) cin >> shirts[i];
    cin >> n3;
    vector<int> pants(n3);
    for (int i = 0; i < n3; ++i) cin >> pants[i];
    cin >> n4;
    vector<int> boots(n4);
    for (int i = 0; i < n4; ++i) cin >> boots[i];
    sort(caps.begin(), caps.end());
    sort(shirts.begin(), shirts.end());
    sort(pants.begin(), pants.end());
    sort(boots.begin(), boots.end());

    int i = 0, j = 0, k = 0, l = 0;
    int best_diff = INT_MAX;
    int best_cap = 0, best_shirt = 0, best_pants = 0, best_boots = 0;

    while (i < n1 && j < n2 && k < n3 && l < n4) {
        int current_min = min({caps[i], shirts[j], pants[k], boots[l]});
        int current_max = max({caps[i], shirts[j], pants[k], boots[l]});
        int current_diff = current_max - current_min;

        if (current_diff < best_diff) {
            best_diff = current_diff;
            best_cap = caps[i];
            best_shirt = shirts[j];
            best_pants = pants[k];
            best_boots = boots[l];
        }
        if (current_min == caps[i]) {
            ++i;
        } else if (current_min == shirts[j]) {
            ++j;
        } else if (current_min == pants[k]) {
            ++k;
        } else {
            ++l;
        }
    }
    cout << best_cap << " " << best_shirt << " " << best_pants << " " << best_boots << endl;
    return 0;
}
