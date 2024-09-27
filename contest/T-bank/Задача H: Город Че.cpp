#include "bits-stdc++.h"
using namespace std;
typedef vector<int64_t> vi64;
typedef vector<vector<int64_t>> vii64;
#define i64 int64_t
#define ui64 uint64_t

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,r;
    cin>>n>>r;
    vector<int> a(n);
    for(int i =0;i<n;++i){
        cin>>a[i];
    }
    int left  = 0;
    int right = 0;
    long long count = 0;
    while(left<n){
        while(right<n && a[right] - a[left]<=r){
            ++right;
        }
        if(right<n){
            count+=(n-right);
        }
        ++left;
    }
    cout<<count<<endl;
    return 0;
}
