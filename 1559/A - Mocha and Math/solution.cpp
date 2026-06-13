#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    int ans;
    cin >> ans;
 
    for(int i = 1; i < n; i++) {
        int num;
        cin >> num;
 
        ans &= num;
    }
 
    cout << ans << '
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