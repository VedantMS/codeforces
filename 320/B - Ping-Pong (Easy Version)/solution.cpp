#include<iostream>
#include<vector>
#include<map>
 
using namespace std;
 
bool dfs(vector<vector<int>> &adj, vector<bool> &visited, int vertex, int target) {
    if(vertex == target)    return true;
 
    visited[vertex] = true;
 
    for(auto u : adj[vertex]) {
        if(!visited[u]) {
            if(dfs(adj, visited, u, target)) {
                return true;
            }
        }
    }
 
    return false;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
 
    vector<vector<int>> adj(n + 1);
    vector<pair<int, int>> intervals(n + 1);
 
    int index = 1;
 
    for(int i = 0; i < n; i++) {
        int a, x, y;
        cin >> a >> x >> y;
 
        if(a == 1) {
            intervals[index] = {x, y};
            
            for(int i = 1; i < index; i++) {
                int left = intervals[i].first;
                int right = intervals[i].second;
                
                if((x < right && x > left) || (y < right && y > left))      adj[index].push_back(i);
                if((left < y && left > x) || (right < y && right > x))      adj[i].push_back(index);
            }
 
            index++;
 
            continue;
        }
 
        vector<bool> visited(n + 1, false);
 
        if(dfs(adj, visited, x, y))     cout << "YES" << '
';
        else                            cout << "NO" << '
';
    }
 
    return 0;
}