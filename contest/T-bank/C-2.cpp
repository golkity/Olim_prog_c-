#include "bits-stdc++.h"
using namespace std;
string f(string& s) {
    unordered_map<char, int> count;
    for (char c : s) {
        count[c]++;
    }
    if (count.find('z') == count.end() || count['z'] == 0) {
        return "NO";
    }
    for (char c = 'a'; c <= 'z'; ++c) {
        char next_c = c + 1;
        int current_count = count[c];
        int next_count = (next_c <= 'z') ? count[next_c] : 0;

        if (current_count > 0) {
            if (next_c <= 'z' && next_count != current_count + 1) {
                return "NO";
            }
        }
    }

    return "YES";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    cout<<f(s);
    return 0;
}
