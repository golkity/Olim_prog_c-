#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vi;
void f(vi& x, int pos, int max, int number) {
    if (number == 0) {
        for (int i = 0; i < pos; i++) {
            cout<<x[i]<<" ";
        }
        cout<<'\n';
        return;
    }
    for (int i = 1; i <= min(max, number); i++) {
        if (pos == 0 || i <= x[pos - 1]) {
            x.push_back(i);
            f(x, pos + 1, i, number - i);
            x.pop_back();
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vi x;
    f(x, 0, n, n);
    return 0;
}
