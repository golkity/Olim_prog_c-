#include "bits-stdc++.h"
using namespace std;
typedef vector<int64_t> vi64;
typedef vector<vector<int64_t>> vii64;
#define i64 int64_t
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,m,q;
    cin>>n>>m>>q;
    vii64 diff(n+2,vi64(m+2,0));
    while(q--){
        int lx,ly,rx,ry,d;
        cin>>lx>>ly>>rx>>ry>>d;
        diff[lx][ly] += d;
        diff[lx][ry+1] -= d;
        diff[rx+1][ly] -= d;
        diff[rx+1][ry+1] += d;
    }
    vii64 a(n+1,vi64(m+1,0));
    for(int i = 1;i<=n;++i){
        for(int j = 1;j<=m;++j){
            a[i][j] = diff[i][j];
            if(i>1) a[i][j] += a[i-1][j];
            if(j>1) a[i][j] += a[i][j-1];
            if(i>1 && j>1) a[i][j] -= a[i-1][j-1];
        }
    }
    for(int i = 1;i<=n;++i){
        for(int j = 1;j<=m;++j){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
