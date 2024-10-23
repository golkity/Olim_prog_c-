#include "bits-stdc++.h"
using namespace std;
typedef map<string, set<string>> mss;

int main() {
    string s;
    int index = 0;
    mss dict;

    while (getline(cin, s)) {
        string key, value;
        for (size_t i = 0; i < s.length(); i++) {
            if (s[i] != '-') {
                value.push_back(s[i]);
            } else {
                index = i;
                break;
            }
        }
        s.push_back(' ');
        value.pop_back();
        for (size_t i = index + 2; i < s.length(); i++) {
            if (s[i] != ' ') {
                key.push_back(s[i]);
            } else {
                if (key.back() == ' ' or key.back() == ',') key.pop_back();
                if (dict.find(key) != dict.end()) {
                    dict[key].insert(value);
                    key = "";
                } else {
                    dict.insert({key, {value}});
                    key = "";
                }
            }
        }
    }
    cout << dict.size() << '\n';
    for (auto item: dict) {
        cout << item.first << " - ";
        int temp = 0;
        for (auto c: item.second) {
            if (temp == 0) cout << c;
            else {cout << ", " << c;}
            temp++;
        }
        temp  = 0;
        cout << '\n';
    }
    return 0;
}
