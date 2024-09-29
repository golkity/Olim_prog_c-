#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vi;
#define i64 int64_t
long double f(double a, double b, double c, double d, double x) {
    return a * x * x * x + b * x * x + c * x + d;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    double a,b,c,d;
    long double m;
    cin>>a>>b>>c>>d;
    long double l = -1;
    long double r = 1;
    while(f(a,b,c,d,r)*f(a,b,c,d,l)>=0){
        r*=2; l*=2;
    }
    for(int i = 0;i<100;++i){
        m = (l+r)/2;
        if (f(a, b, c, d, m) * f(a, b, c, d, r) <= 0)
            l = m;
        else
            r = m;
    }
    cout<<fixed<<setprecision(19)<<r<<"\n";
    return 0;
}
