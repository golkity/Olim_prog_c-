#include "bits-stdc++.h"
using namespace std;

int64_t sumpoint(vector<int>& s, int k){
    int n = s.size();
    if(k>=n) return 0;
    sort(s.begin(),s.end());
    vector<int> gaps;
    for(int i = 1;i<n;++i){
        gaps.push_back(s[i] - s[i-1]);
    }
    sort(gaps.begin(),gaps.end());
    int64_t t_l = s[n-1] - s[0];
    for(int i = 0;i<k-1;++i){
        t_l-=gaps[n-2-i];
    }
    return t_l;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i = 0;i<n;++i){
        cin>>a[i];
    }
    cout<<sumpoint(a,k);
    return 0;
}
