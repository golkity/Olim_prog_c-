#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vi;

void f(vi& x, int pos, int number) {
    if (number == 0) {
        for (int i = 0; i < pos; i++) {
            cout<<x[i]<<" ";
        }
        cout<<'\n';
        return;
    }
    for (int i = number; i >= 1; i--) {
        if (pos == 0 || i >= x[pos - 1]) {
            x.push_back(i);
            f(x, pos + 1, number - i);
            x.pop_back();
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    vi x;
    f(x, 0, n);
    return 0;
}
