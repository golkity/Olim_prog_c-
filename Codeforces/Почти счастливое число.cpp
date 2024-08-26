#include "bits-stdc++.h"

using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    vector<char> res;
    for(auto x : s){
        if(x == '4' || x == '7'){
            res.push_back(x);
        }
    }
    if(res.size()==4 || res.size()==7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
