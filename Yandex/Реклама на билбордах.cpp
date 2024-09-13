#include "bits-stdc++.h"
using namespace std;
typedef i64 int64_t;
struct ad{
    int cost,weeks,id;
};
bool cmp(ad& a, ad& b){
    return a.cost> b.cost;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,k,m;
    cin>>n>>k>>m;
    vector<ad> ads(k);
    for(int i = 0;i<k;++i){
        cin>>ads[i].cost>>ads[i].weeks;
        ads[i].id = i;
    }
    sort(ads.begin(),ads.end(),cmp);

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> solts;
    for(int i = 0;i<n;++i){
        for(int j = 0;j<m;++j){
            solts.push({i,j});
        }
    }
    i64 max_progit = 0;
    for(auto ad : ads){
        int p_w = 0;
        while(!solts.empty() && p_w < ad.weeks){
            auto[week, b] = solts.top();
            solts.pop();

            max_progit+=ad.cost;
            p_w++;
        }
    }
    cout<<max_progit;
    return 0;
}
