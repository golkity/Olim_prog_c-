#include "bits-stdc++.h"
using namespace std;
#define i64 int64_t

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    deque<i64> deq;
    deque<i64> deq_min;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;

        if (x == 1) {
            int64_t num;
            cin >> num;
            deq.push_back(num);

            while (!deq_min.empty() && deq_min.back() > num) {
                deq_min.pop_back();
            }
            deq_min.push_back(num);

        } else if (x == 2) {
            cout << deq.front() << "\n";
            if (deq.front() == deq_min.front()) {
                deq_min.pop_front();
            }
            deq.pop_front();

        } else if (x == 3) {
            int i;
            cin >> i;
            cout << deq[i - 1] << "\n";

        } else if (x == 4) {
            cout << deq_min.front() << "\n";
        }
    }

    return 0;
}
