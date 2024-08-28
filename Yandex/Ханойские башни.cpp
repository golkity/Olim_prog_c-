#include "bits-stdc++.h"
using namespace std;

int T(int n){
     return pow(2,n)-1;
}

void hanoi(int n, int f, int t) {
    if (n == 0) {
        return;
    }
    int v = 6 - f - t;
    hanoi(n - 1, f, v);
    cout << f << " " << t << endl;
    hanoi(n - 1, v, t);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    cout<<T(n)<<"\n";
    hanoi(n,1,3);
    return 0;
}
