#include "bits-stdc++.h"
using namespace std;

typedef vector<int> vi;
int maxloot(vi& weight, int w){
    if(w == 0 || weight.empty())
        return 0;
    sort(weight.begin(), weight.end());
    int cnt = 0;
    int total_w = 0;
    for(int i = 0;i<weight.size();++i){
        if(total_w + weight[i]<=w){
            total_w+=weight[i];
            cnt++;
        }
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,w;
    cin>>n>>w;
    vi weight(n);
    for(int i = 0;i<n;++i){
        cin>>weight[i];
    }
    cout<<maxloot(weight,w);
    return 0;
}
