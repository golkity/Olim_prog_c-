#include "bits-stdc++.h"
using namespace std;
typedef vector<int64_t> vi64;
typedef vector<vector<int64_t>> vii64;
#define i64 int64_t
int const min_i = -1;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vi64 a(n,0);
    for(int i = 0;i<n;++i){
        cin>>a[i];
    }
    i64 s = a[0];
    i64 b = a[0];
    for(int i = 1;i<n;++i){
        b= max(a[i],b+a[i]);
        s = max(s,b);
    }
    cout<<s;
    return 0;
}
