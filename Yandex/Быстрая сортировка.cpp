#include "bits/stdc++.h"
using namespace std;
typedef vector<int> vi;

int parition(vi& a,int l,int h){
    int rand_i = l+rand()%(h-l+1);
    swap(a[rand_i], a[h]);

    int p = a[h];
    int i = l-1;
    for(int j = l;j<h;++j){
        if(a[j]<=p){
            ++i;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[h]);
    return i+1;
}
void quicksort(vi& a ,int l,int h){
    if(l<h){
        int p = parition(a,l,h);
        quicksort(a,l,p-1);
        quicksort(a,p+1,h);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    vi a(n);
    for(int i = 0;i<n;++i){
        scanf("%d", &a[i]);
    }
    quicksort(a,0,n-1);
    for(auto elem : a){
        printf("%d ",elem);
    }
    printf("\n");
    return 0;
}
