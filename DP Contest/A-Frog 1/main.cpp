#include "bits-stdc++.h"
const int INF = 1e9-7;
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> h(n);
    for(int i = 0;i<n;++i){
        cin>>h[i];
    }
    vector<int> dp(n, INF);
    dp[0] = 0;
    for(int i = 0;i<n;++i){
        for(int j = i+1;j<=i+2;++j){
            if(j<n){
                dp[j] = min(dp[j],dp[i] + abs(h[i] - h[j]));
            }
        }
    }

    cout<<dp[n-1];

    return 0;
}
