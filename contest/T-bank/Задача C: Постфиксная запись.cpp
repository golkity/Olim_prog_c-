#include "bits-stdc++.h"
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cout.tie(0);cin.tie(0);
    int n;
    cin>>n;
    stack<int64_t> stk;
    for(int i = 0;i<n;++i){
        int x;
        cin>>x;
        if(x == 0){
            int64_t num;
            cin>>num;
            stk.push(num);
        }else{
            int64_t b = stk.top();stk.pop();
            int64_t a = stk.top();stk.pop();

            if(x == 1){
                stk.push(a+b);
            }else if(x == 2){
                stk.push(a-b);
            }else if(x == 3){
                stk.push(a*b);
            }
        }
    }
    cout<<stk.top();
    return 0;
}
