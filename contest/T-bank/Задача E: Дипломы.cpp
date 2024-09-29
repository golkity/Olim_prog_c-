#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vi;
#define i64 int64_t

bool ok(i64 w,i64 h,i64 x,i64 n){
    return (x/w) * (x/h) >= n;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    i64 w,h,n;
    cin>>w>>h>>n;
    i64 l = max(w,h);
    i64 r = l*n;
    while(r-l>1){
        i64 m = (r+l)/2;
        if(ok(w,h,m,n)) r = m;
        else l = m;
    }
    cout<<r<<"\n";
    return 0;
}
