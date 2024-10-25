#include "bits-stdc++.h"
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    set<int> rooms;
    for(int i = 1;i<=1000000;++i){
        rooms.insert(i);
    }
    for(int i = 0;i<n;++i){
        int x;
        cin>>x;
        if(x>0){
            auto it = rooms.lower_bound(x);
            cout<<*it<<'\n';
            rooms.erase(it);
        }else{
            rooms.insert(-x);
        }
    }
    return 0;
}
