#include "bits-stdc++.h"
using namespace std;
#define s string
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    unordered_map<string,string> a;
    for(int i = 0;i<n;++i){
        s s1,s2;
        cin>>s1>>s2;
        a[s1] = s2;
        a[s2] = s1;
    }
    s find;
    cin>>find;
    cout<<a[find]<<'\n';
    return 0;
}
