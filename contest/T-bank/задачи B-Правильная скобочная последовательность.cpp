#include "bits-stdc++.h"
using namespace std;

bool ok(const string& s){
    stack<char> stk;
    for(char c : s){
        if(c == '(' || c == '[' || c == '{'){
            stk.push(c);
        }else{
            if(stk.empty()){
                return false;
            }
            char top = stk.top();
            if((top == '(' && c == ')') || (top == '[' && c == ']') || (top == '{' && c == '}')){
                stk.pop();
            }else{
                return false;
            }
        }
    }
    return stk.empty();
}

int main(){
    ios::sync_with_stdio(false);
    cout.tie(0);cin.tie(0);
    string s;
    getline(cin,s);
    if(ok(s)){
        cout<<"yes\n";
    }else{
        cout<<"no\n";
    }
    return 0;
}
