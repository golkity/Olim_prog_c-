#include "bits-stdc++.h"

using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    vector<vector<int>> sum(n,vector<int> (m));
    vector<vector<int>> a(n,vector<int>(m));
    for(int i = 0;i<n;++i){
        for(int j = 0;j<m;++j){
            cin>>a[i][j];

        }
    }
    vector<vector<int>> b(n,vector<int>(m));
    for(int i = 0;i<n;++i){
        for(int j = 0;j<m;++j){
            cin>>b[i][j];
        }
    }
    vector<vector<int>> s(n,vector<int>(m));
    for(int i = 0;i<n;++i){
        for(int j =0;j<m;++j){
            s[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i = 0;i<n;++i){
        for(int j =0;j<m;++j){
            cout<<s[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
