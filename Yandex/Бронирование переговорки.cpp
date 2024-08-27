#include "bits-stdc++.h"

using namespace std;
bool cmp(pair<int,int>& a,pair<int,int>& b){
    return a.second< b.second;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    int last = -1;
    int cnt = 0;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i = 0;i<n;++i){
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(),a.end(),cmp);
    for(auto elem : a){
        if(elem.first > last){
            last = elem.second;
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
