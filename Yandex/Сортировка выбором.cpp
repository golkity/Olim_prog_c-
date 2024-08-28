#include "bits-stdc++.h"

using namespace std;

void selection(vector<int>& a){
    for(int i = 0;i<(int)a.size()-1;++i){
        int imin = i;
        for(int j = i+1;j<a.size();++j){
            if(a[j]<a[imin]){
                imin = j;
            }
        }
        swap(a[i],a[imin]);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;++i){
        cin>>arr[i];
    }
    selection(arr);
    for(auto elem : arr){
        cout<<elem<<" ";
    }

    return 0;
}
