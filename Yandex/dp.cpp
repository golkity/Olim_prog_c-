#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int> > t(n + 1, vector<int> (m + 1, 0));
    for (int i = 1; i < t.size(); ++i){
        for(int j = 1; j < t[i].size(); ++j){
            cin >> t[i][j];
        }
    }
    vector<vector<int> > d(n + 1, vector<int> (m + 1, 0));
    for (int i = 1; i < d.size(); ++i){
        for(int j = 1; j < d[i].size(); ++j){
            d[i][j] = t[i][j];
        }
    }
    for (int i = 1; i < d.size(); ++i){
        for(int j = 1; j < d[i].size(); ++j){
            d[i][j] = max(d[i-1][j] , d[i][j-1]) + t[i][j];
        }
    }
    cout << d[n][m] << endl;
    int i = n, j = m;
    vector<string> ans(m + n - 2, " ");
    while(j >= 1 && i >= 1){
        if(d[i - 1][j] > d[i][j - 1]){
            i--;
            ans.emplace_back("D");
        }else{
            j--;
            ans.emplace_back("R");
        }
    }
    for(i = ans.size()- 2; i > ans.size() - (m + n); i--){
        cout << ans[i] <<" ";
    }
    return 0;
}
