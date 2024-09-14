#include "bits/stdc++.h"
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int64_t k = 0;
    int64_t sum = 0;
    while(sum+(k+1)<=n){
        k++;
        sum += k;
    }
    cout<<k;
    return 0;
}
