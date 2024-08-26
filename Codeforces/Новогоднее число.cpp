#include "bits-stdc++.h"

using namespace std;
typedef vector<int> vi;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vi a(n);
    for(int i = 0;i<n;++i){
        cin>>a[i];
    }
    for(int i = 0;i<n;++i){
        int y1 = a[i]%2020;
        int y2 = (a[i]-y1)/2020 - y1;
        if(y2 >=0 && 2020 * y2 + 2021* y1 == a[i]){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}
