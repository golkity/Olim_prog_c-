#include "bits/stdc++.h"
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t t1,t2,x,y;
    cin>>t1>>t2;
    cin>>x>>y;
    x = abs(x);
    y = abs(y);
    if(x>y) swap(x,y);
    int64_t result = 0;
    if(t1*2<=t2)
        result = (x+y)*t1;
    else{
        int64_t diff = y - x;
        result = x * t2 + diff * t1;
    }
    cout<<result;
    return 0;
}
