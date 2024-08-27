#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vI;
int MOD = 1000000007;
int MAXN = 100005;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,k;
    cin>>t>>k;
    vI sum(MAXN,0);
    vI nr(MAXN,0);
    for(int i = 0;i<k;++i){
        nr[i] = 1;
    }
    for(int i = k;i<MAXN;++i){
        nr[i] = (nr[i-1]+nr[i-k])%MOD;
    }
    sum[0] = nr[0];
    for(int i = 1;i<MAXN;++i){
        sum[i] = (sum[i-1]+nr[i])%MOD;
    }
    for(int i = 0;i<t;++i){
        int a,b;
        cin>>a>>b;
        int result = (sum[b]-sum[a-1]+MOD)%MOD;
        cout<<result<<"\n";
    }
    return 0;
}
