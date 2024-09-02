#include "bits-stdc++.h"
using namespace std;
#define intz long long
intz gcd(intz a,intz b){
    while(b>0){
        a%=b;
        swap(a,b);
    }
    return a;
}
intz lcm(intz a,intz b){
    return (a/gcd(a,b))*b;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
    return 0;
}
