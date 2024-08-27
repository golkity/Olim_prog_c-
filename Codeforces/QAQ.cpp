#include "bits-stdc++.h"
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int cnt = 0,A_c = 0,Q_c = 0;
    for(int i = 0;i<s.length();++i){
        if(s[i] == 'Q'){
            cnt+= A_c;
            Q_c++;
        }if(s[i] == 'A'){
            A_c += Q_c;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}
