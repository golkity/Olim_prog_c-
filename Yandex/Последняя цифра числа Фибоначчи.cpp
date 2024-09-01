#include "bits-stdc++.h"

using namespace std;
typedef vector<int> vi;

int64_t fib(int n){
    if(n<=1) return n;
    int64_t a = 0;
    int64_t b = 1;
    for(int i = 0;i<n-1;++i){
        int old = a;
        a = b;
        b = (old+a)%10;
    }
    return b;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d", fib(n));
    return 0;
}
