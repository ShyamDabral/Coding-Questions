/*LeetCode question no. 2872 in C++
Date 21/12/2024 Time 3:00 P.M.
Time complexity O(n+m)
Where:
n is the number of vertices.
m is the number of edges.*/
class Solution {
public:
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        int ans = 0;
        vector<int> g[n];
        for (auto& e : edges) {
            int a = e[0], b = e[1];
            g[a].push_back(b);
            g[b].push_back(a);
        }
        function<long long(int, int)> dfs = [&](int i, int fa) {
            long long s = values[i];
            for (int j : g[i]) {
                if (j != fa) {
                    s += dfs(j, i);
                }
            }
            ans += s % k == 0;
            return s;
        };
        dfs(0, -1);
        return ans;
    }
};
