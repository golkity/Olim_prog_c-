#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

int main(){
    int n,p;
    cin>>n;
    vector<int> s;
    vector<int> k(n,0);
    for(int i =0;i<n;++i){
        cin>>p;
        s.push_back(p);
    }
    sort(s.begin(), s.end());
    k[1] = s[1] - s[0];
    if(n>2){
        k[2] = s[2] - s[0];
        for(int i  =3 ;i<n;++i){
            k[i] = min(k[i-1], k[i-2]) + s[i] - s[i-1];
        }
    }

    cout<<k[n-1];

    return 0;
}
