#include "bits-stdc++.h"
using namespace std;

int gcd(int a,int b){
    while(b>0){
        a%=b;
        swap(a,b);
    }
    return a;
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d", gcd(a,b));
    return 0;
}
