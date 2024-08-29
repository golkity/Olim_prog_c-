#include "bits/stdc++.h"

using namespace std;
int main(){
    int n;
    int cnt = 0;
    scanf("%d", &n);
    for(int i = 0;i<n;++i){
        int p,v,t;
        scanf("%d%d%d", &p,&v,&t);
        if(p+v+t>=2)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}
