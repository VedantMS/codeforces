#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    long long n, k;
    cin >> n >> k;
 
    long long ans = 0, num = n;
 
    for (long long i = 1; i <= num; i <<= 1) {
        long long a = min(k, num / i);
        ans += a;
        num -= a * i;
    }
 
    cout << ans << '
';
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    long long t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}