#include "bits/stdc++.h"
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    if((n-m)%3==0){
        cout<<"Lose";
    }else{
        cout<<"Win";
    }
}
