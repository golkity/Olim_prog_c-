#include "bits-stdc++.h"
using namespace std;

void recurs(int n,string s){
    if(s.size() == n){
        cout<<s<<'\n';
        return;
    }

    recurs(n,s+'0');
    recurs(n,s+'1');
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;cin>>n;
    string s = "";
    recurs(n,s);
    return 0;
}
