#include "bits-stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int q;
    cin >> q;
    stack<int64_t> stk;
    stack<int64_t> stk_m;

    for (int i = 0; i < q; ++i) {
        int x;
        cin >> x;

        if (x == 1) {
            int64_t a;
            cin >> a;
            stk.push(a);
            if (stk_m.empty() || a <= stk_m.top()) {
                stk_m.push(a);
            }
        } else if (x == 2) {
            cout << stk.top() << "\n";
            if (stk.top() == stk_m.top()) {
                stk_m.pop();
            }
            stk.pop();
        } else if (x == 3) {
            cout << stk_m.top() << "\n";
        }
    }

    return 0;
}
