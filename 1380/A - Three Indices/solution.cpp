#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> p(n);
    for (auto &it : p) {
        cin >> it;
    }
 
    for (int i = 1; i < n - 1; i++) {
        if (p[i - 1] < p[i] && p[i] > p[i + 1]) {
            cout << "YES 
";
            cout << i << " " << i + 1 << " " << i + 2 << '
';
            return;
        }
    }
 
    cout << "NO 
";
}
 
int main() {
    ios::sync_with_stdio();
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}