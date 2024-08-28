#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vi;

vector<int> merge_sort(vi a, vi b){
    vi res;
    int i = 0;
    int j = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j])
            res.push_back(a[i++]);
        else
            res.push_back(b[j++]);
    }while(i<a.size())
        res.push_back(a[i++]);
    while(j<b.size())
        res.push_back(b[j++]);
    return res;
}

vector<int> merge_s(vi a){
    if(a.size()<=1)
        return a;
    int k = a.size()/2;
    return merge_sort(
            merge_s(vector<int>(a.begin(), a.begin()+k)),
            merge_s(vector<int>(a.begin()+k,a.end())));
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vi a(n);
    for(int i = 0;i<n;++i){
        cin>>a[i];
    }
    vi result = merge_s(a);
    for(auto elem : result){
        cout<<elem<<" ";
    }
    return 0;
}
