#include "bits-stdc++.h"
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    string a,b,res;
    cin>>a>>b;
    for(int i = 0;i<n;++i){
        res +=a[i];
        res +=b[i];
    }
    cout<<res;
    return 0;
}
