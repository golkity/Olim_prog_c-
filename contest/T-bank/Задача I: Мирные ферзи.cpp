#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vi;
bool ok(int r,int l, const vi& q){
    for(int i = 0;i<r;++i){
        if(q[i] == l || abs(q[i]-l) == abs(i-r)){
            return false;
        }
    }
    return true;
}

void funcrec(int r,int n,vi& q,int& cnt){
    if(r == n){
        cnt++;
        return;
    }
    for(int i = 0;i<n;++i){
        if(ok(r,i,q)){
            q[r] = i;
            funcrec(r+1,n,q,cnt);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vi q(n);
    int cnt = 0;
    funcrec(0,n,q,cnt);
    cout<<cnt<<'\n';
    return 0;
}
