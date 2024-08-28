#include "bits-stdc++.h"
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    vector<int> res;
    cin>>n;
    for(int i = 0;i<n;++i){
        int x;
        cin>>x;
        vector<int> a(x);
        for(int j = 0;j<x;++j){
            cin>>a[j];
            res.push_back(a[j]);
        }
    }
    sort(res.begin(), res.end());
    for(auto x: res){
        cout<<x<<" ";
    }
    return 0;
}
