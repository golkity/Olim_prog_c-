#include "bits-stdc++.h"
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i =0;i<n;++i){
        cin>>a[i];
    }
    int max_v = *max_element(a.begin(),a.end());
    vector<long long> cnt(max_v+1,0);
    for(int x : a){
        cnt[x]++;
    }
    vector<long long> dp(max_v+1,0);
    dp[0] = 0;
    dp[1] = cnt[1];
    for(int i = 2;i<=max_v;++i){
        dp[i] = max(dp[i-1],dp[i-2]+cnt[i]*i);
    }
    cout<<dp[max_v]<<"\n";
    return 0;
}
