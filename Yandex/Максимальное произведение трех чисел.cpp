#include "bits-stdc++.h"

using namespace std;
typedef vector<int> vi;

long long maxpr(const vi& A) {
    int n = A.size();
    vi B = A;
    sort(B.begin(), B.end());
    long long max1 = (long long)B[n-1] * B[n-2] * B[n-3];
    long long max2 = (long long)B[0] * B[1] * B[n-1];

    return max(max1, max2);
}

int main(){
    int n;scanf("%d",&n);
    vi a(n);
    for(int  i = 0;i<n;++i){
        scanf("%d",&a[i]);
    }
    cout<<maxpr(a);
    return 0;
}
