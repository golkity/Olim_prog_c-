#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
void find_comd(int m,int start,vi& coins, vi& comd,vii& result ){
    if(m == 0){
        result.push_back(comd);
        return;
    }
    for(int i = start;i<coins.size();++i){
        if(m >=coins[i]){
            comd.push_back(coins[i]);
            find_comd(m-coins[i],i,coins,comd,result);
            comd.pop_back();
        }
    }
}

bool cmp(vi& a, vi& b){
    if(a.size()!=b.size())
        return a.size()<b.size();
    return a>b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vi coins = {10,5,1};
    vii result;
    vi comp;
    find_comd(n,0, coins, comp, result);
    sort(result.begin(), result.end(), cmp);
    cout<<result.size()<<"\n";

    for (auto& x : result) {
        cout << x.size() << " ";
        for (int i = 0; i < x.size(); ++i) {
            cout << x[i];
            if (i != x.size() - 1) cout << " ";
        }
        cout << "\n";
    }


    return 0;
}
