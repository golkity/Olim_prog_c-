#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
int main(){
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    int N;
    cin>>N;
    vvi dp(N+1, vi(N,0));
    dp[1][0] = 1;
    dp[1][1] = 1;
    dp[1][2] = 0;

    for(int n = 2; n<=N;++n){
        dp[n][0] = dp[n-1][0] + dp[n-1][1] + dp[n-1][2];
        dp[n][1] = dp[n-1][0];
        dp[n][2] = dp[n-1][1];
    }
    long long result = dp[N][0] + dp[N][1] + dp[N][2];

    cout<<result;

    return 0;
}
