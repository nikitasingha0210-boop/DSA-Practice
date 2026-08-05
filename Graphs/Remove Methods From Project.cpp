/*
LeetCode 3310
Problem: Remove Methods From Project
Topic: Graphs
Difficulty: Medium
Language: C++
*/



class Solution {
public:
    void dfs(int u, vector<vector<int>>& g, vector<bool>& suspicious) {
        suspicious[u] = true;
        for (int v : g[u]) {
            if (!suspicious[v]) {
                dfs(v, g, suspicious);
            }
        }
    }

    void dfs2(int u, vector<vector<int>>& graph, vector<bool>& vis,
              vector<bool>& suspicious) {
        vis[u] = true;
        for (int v : graph[u]) {
            if (!vis[v]) {
                suspicious[v] = false;
                dfs2(v, graph, vis, suspicious);
            }
        }
    }

    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> graph(n), directed(n);

        for (auto &e : invocations) {
            int a = e[0], b = e[1];
            graph[a].push_back(b);
            graph[b].push_back(a);
            directed[a].push_back(b);
        }

        vector<bool> suspicious(n, false);
        dfs(k, directed, suspicious);

        vector<bool> vis(n, false);

        for (int i = 0; i < n; i++) {
            if (!suspicious[i] && !vis[i]) {
                dfs2(i, graph, vis, suspicious);
            }
        }

        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (!suspicious[i]) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};