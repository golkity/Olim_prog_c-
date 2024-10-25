#include "bits-stdc++.h"
using namespace std;

void func(int n, int k,string s,int c,int p){
    if (c > k || c + (n - p) < k) {
        return;
    }

    if (s.length() == n) {
        if (c == k) {
            cout << s <<'\n';
        }
        return;
    }
    func(n, k, s + '0', c, p + 1);
    func(n, k, s + '1', c + 1, p + 1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    func(n,k,"",0,0);
    return 0;
}
