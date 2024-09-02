#include "bits-stdc++.h"
using namespace std;
using Matrix = vector<vector<int64_t>>;
Matrix multiplyMatrices(const Matrix &a, const Matrix &b, int64_t m) {
    Matrix result(2, vector<int64_t>(2));
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < 2; ++k) {
                result[i][j] = (result[i][j] + a[i][k] * b[k][j]) % m;
            }
        }
    }
    return result;
}

Matrix fastMatrixExponentiation(Matrix base, int64_t exp, int64_t m) {
    Matrix result = {{1, 0}, {0, 1}};
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = multiplyMatrices(result, base, m);
        }
        base = multiplyMatrices(base, base, m);
        exp /= 2;
    }
    return result;
}

int64_t FibonacciModuloM(int64_t n, int64_t m) {
    Matrix M = {{0, 1}, {1, 1}};
    Matrix P = fastMatrixExponentiation(M, n, m);
    return P[0][1];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int64_t n,m;
    cin>>n>>m;
    cout<<FibonacciModuloM(n,m);
    return 0;
}
