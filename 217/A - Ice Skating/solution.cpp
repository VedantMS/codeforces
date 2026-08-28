#include <bits/stdc++.h>
 
using namespace std;
 
void dfs(int u, vector<bool> &visited, vector<int> &x, vector<int> &y) {
    visited[u] = true;
 
    for (int i = 0; i < x.size(); i++) {
        if (!visited[i] && (x[i] == x[u] || y[i] == y[u])) {
            dfs(i, visited, x, y);
        }
    }
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
 
    vector<int> x(n), y(n);
 
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
 
    vector<bool> visited(n, false);
 
    int ans = 0;
 
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(i, visited, x, y);
            
            ans++;
        }
    }
 
    cout << ans - 1;
 
    return 0;
}