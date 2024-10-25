#include "bits-stdc++.h"
using namespace std;

void func(int n, int k,string s){
    if(s.size() == n){
        cout<<s<<'\n';
        return;
    }
    for(int i = 0;i<k;++i){
        func(n,k,s+ to_string(i));
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    func(n,k,"");
    return 0;
}
