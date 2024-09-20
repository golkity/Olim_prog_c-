#include "bits-stdc++.h"
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    deque<string> f;
    deque<string> s;
    int n;
    cin>>n;
    for(int i = 0;i<n;++i){
        string cmd;
        cin>>cmd;if( cmd == "-"){
            cout<<f.front()<<"\n";
            f.pop_front();
        }else if(cmd == "+"){
            string v;
            cin>>v;
            s.push_back(v);
        }else{
            string v;
            cin>>v;
            s.push_front(v);
        }
        if(s.size() > f.size()){
            f.push_back(s.front());
            s.pop_front();
        }
    }
    return 0;
}
