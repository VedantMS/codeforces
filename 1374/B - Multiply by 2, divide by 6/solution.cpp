#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
 
    int ans = 0;
 
    while (n != 1) {
        if (n % 6 == 0) {
            n /= 6;
        }
 
        else if (n % 3 == 0) {
            n *= 2;
        }
 
        else {
            cout << -1 << '
';
            return;
        }
 
        ans++;
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