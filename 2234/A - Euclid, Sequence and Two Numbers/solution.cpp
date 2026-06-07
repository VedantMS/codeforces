#include<bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> b(n);
    for(auto &it : b)       cin >> it;
 
    sort(b.rbegin(), b.rend());
 
    if(n > 2) {
        for(int i = 1; i < n; i++) {
            if(b[i] == b[i - 1]) {
                cout << -1 << '
';
                return;
            }
        }
    }
 
    for(int i = 0; i < n - 2; i++) {
        if(b[i] % b[i + 1] != b[i + 2] || b[i + 1] == 0) {
            cout << -1 << '
';
            return;
        }
    }
 
    cout << b[0] << " " << b[1] << '
';
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}