#include <bits/stdc++.h>
 
using namespace std;
 
void dfs(int u, bool &cycle, vector<vector<int>> &adj, vector<bool> &visited) {
    visited[u] = true;
    
    if (adj[u].size() != 2) {
        cycle = false;
    }
 
    for (int &v : adj[u]) {
        if (!visited[v]) {
            dfs(v, cycle, adj, visited);
        }
    }
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m;
    cin >> n >> m;
 
    vector<vector<int>> adj(n + 1);
 
    while (m--) {
        int u, v;
        cin >> u >> v;
 
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    vector<bool> visited(n + 1, false);
 
    int ans = 0;
    
    for (int i = 1; i <= n; i++) {
        bool cycle = true;
 
        if (!visited[i]) {
            dfs(i, cycle, adj, visited);
 
            if (cycle) {
                ans++;
            }
        }
    }
 
    cout << ans;
 
    return 0;
}