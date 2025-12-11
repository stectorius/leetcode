#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        int m = buildings.size();
        unordered_map<int, vector<int>> row;
        unordered_map<int, vector<int>> col;
        row.reserve(m*2);
        col.reserve(m*2);
        
        for (auto &b : buildings) {
            int x = b[0], y = b[1];
            row[x].push_back(y);
            col[y].push_back(x);
        }
        
        for (auto &kv : row) {
            auto &v = kv.second;
            sort(v.begin(), v.end());
        }
        for (auto &kv : col) {
            auto &v = kv.second;
            sort(v.begin(), v.end());
        }
        
        int ans = 0;
        for (auto &b : buildings) {
            int x = b[0], y = b[1];
            auto &r = row[x];
            auto &c = col[y];
            
            bool insideRow = false, insideCol = false;
            auto itR = lower_bound(r.begin(), r.end(), y);
            if (itR != r.begin() && (itR+1) != r.end()) insideRow = true;
            auto itC = lower_bound(c.begin(), c.end(), x);
            if (itC != c.begin() && (itC+1) != c.end()) insideCol = true;
            
            if (insideRow && insideCol) ++ans;
        }
        return ans;
    }
};
