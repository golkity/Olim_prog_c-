#include "bits-stdc++.h"
using namespace std;
typedef vector<double> vd;

double maxloot(double W, vd& cost, vd& weight){
    if(W == 0 || weight.empty()){
        return 0;
    }
    int m = 0;
    double max_rev = cost[0]/weight[0];
    for(int i = 1;i<weight.size();++i){
        double rat = cost[i]/weight[i];
        if(rat>max_rev){
            max_rev = rat;
            m = i;
        }
    }
    double amount = min(weight[m],W);
    double value = (cost[m]/weight[m])*amount;

    weight.erase(weight.begin()+m);
    cost.erase(cost.begin()+m);

    return value + maxloot(W-amount,cost,weight);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    double W;
    cin>>n>>W;
    vd cost(n);
    vd weight(n);
    for(int i = 0;i<n;++i){
        cin>>cost[i]>>weight[i];
    }
    cout.precision(4);
    cout<<fixed<<maxloot(W,cost,weight);
    return 0;
}
