#include "bits-stdc++.h"

using namespace std;

int f(int n,int r){
    if(n == 0) return 0;
    if(n == 1) return 1;
    int k = n-floor(sqrt(2*n+1)+0.5)+1;
    if(r==3){
        return pow(2,n)-1;
    }
    return 2*f(k,r) + f(n-k,r-1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    cout<<f(n,4);
    return 0;
}
