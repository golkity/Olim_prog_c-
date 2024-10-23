#include "bits-stdc++.h"
using namespace std;
#define i64 int64_t
typedef vector<i64> vi;
typedef deque<i64> dqi;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;cin>>n>>k;
    vi a(n);
    for(int i = 0;i<n;++i){cin>>a[i];}
    dqi dq;
    vi res;
    for(int i = 0;i<n;++i){
        if(!dq.empty() && dq.front()==i-k){
            dq.pop_front();
        }
        while (!dq.empty() && a[dq.back()] >= a[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i >= k - 1) {
            res.push_back(a[dq.front()]);
        }
    }
    for(auto& e:res){
        cout<<e<<" ";
    }
    return 0;
}
