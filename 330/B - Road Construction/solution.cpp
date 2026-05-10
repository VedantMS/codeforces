#include<iostream>
#include<vector>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m;
    cin >> n >> m;
 
    vector<bool> visited(n + 1, false);
    
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        
        if(!visited[u])     visited[u] = true;
        if(!visited[v])     visited[v] = true;
    }
 
    int vertex;
 
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            vertex = i;
            break;
        }
    }
 
    cout << n - 1 << '
';
 
    for(int i = 1; i <= n; i++) {
        if(vertex != i) {
            cout << i << ' ' << vertex << '
';
        }
    }
 
    return 0;
}