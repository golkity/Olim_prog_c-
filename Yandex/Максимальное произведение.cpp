#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vi;

long long maxpr(const vi& A) {
    int n = A.size();
    int index_1 = 0;
    for (int i = 1; i < n; i++) {
        if (A[i] > A[index_1]) {
            index_1 = i;
        }
    }
    int index_2 = (index_1 == 0) ? 1 : 0;
    for (int i = 0; i < n; i++) {
        if (i != index_1 && A[i] > A[index_2]) {
            index_2 = i;
        }
    }

    return (long long)A[index_1] * A[index_2];
}

int main(){
    int n;
    scanf("%d", &n);
    vi a(n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
    }
    cout << maxpr(a);
    return 0;
}
