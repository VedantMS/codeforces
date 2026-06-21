#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (auto &it : a) {
        cin >> it;
    }
 
    int ans = a[0];
 
    for (int i = 1; i < n; i++) {
        a[i] = min(a[i], a[i - 1]);
        ans += a[i];
    }
 
    cout << ans << '
';
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}