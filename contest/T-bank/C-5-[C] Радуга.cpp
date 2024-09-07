#include "bits-stdc++.h"
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;string s;
    cin>>n>>s;
    int max_c = 0, r = 0,g = 0, b = 0;
    int i = 0;
    while(i<n){
        while(i<n && (s[i] == 'G' || s[i] == 'B')){
            ++i;
        }
        while(i<n && s[i] == 'R'){
            ++r;++i;
        }
        while(i<n && s[i] == 'G' && r>0){
            ++g;++i;
        }
        while(i<n && s[i] == 'B' && r>0 && g>0){
            ++b;++i;
        }
        if(r>0 && g>0 && b>0 && r>=g && g<=b){
            int a = min(r, min(g,b));
            max_c = max(max_c, a*3);
        }
        r = g =b =0;
    }
    cout<<max_c;
    return 0;
}
