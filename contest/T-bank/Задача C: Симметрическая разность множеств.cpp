#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vi;
typedef set<int> si;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n;
    si sA;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        sA.insert(x);
    }
    cin >> m;
    si sB;
    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
        sB.insert(x);
    }
    vi a;
    for (int x : sA) {
        if (sB.find(x) == sB.end()) {
            a.push_back(x);
        }
    }
    for (int x : sB) {
        if (sA.find(x) == sA.end()) {
            a.push_back(x);
        }
    }

    sort(a.begin(), a.end());
    cout << a.size() << endl;
    for (int x : a) {
        cout << x << " ";
    }
    return 0;
}
