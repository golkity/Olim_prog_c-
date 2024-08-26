#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vi;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin>>n>>k;
    vi h(n);
    long long max_s = 0;
    for(int i = 0;i<n;++i){
        cin>>h[i];
        max_s +=h[i];
    }
    long long m_s = max_s;
    int i_s = 0;
    for(int i = k;i<n;++i){
        max_s +=h[i] - h[i-k];
        if(max_s <m_s){
            m_s = max_s;
            i_s = i-k+1;
        }
    }
    cout<<i_s+1<<"\n";
    return 0;
}
