#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vi;
#define i64 int64_t
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    double c;
    cin>>c;

    double l = 0;
    double r = c;
    for(int i = 0;i<200;++i){
        double m = (r+l)/2;
        (m*m+ sqrt(m)<c? l:r) = m;
    }
    cout<<fixed<<setprecision(12)<<r<<"\n";
    return 0;
}
