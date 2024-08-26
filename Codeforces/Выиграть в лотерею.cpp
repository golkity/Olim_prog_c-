#include "bits-stdc++.h"
using namespace std;
typedef vector<int> vi;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin>>n;
    vi money = {100,20,10,5,1};
    int count = 0;
    for(auto c : money){
        if(n==0) break;
        count+=n/c;
        n%=c;
    }
    cout<<count;
    return 0;
}
