#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    long long c;
    cin >> n >> c;
 
    vector<long long> a(n);
 
    long long sum = 0;
    for (long long &x : a) {
        cin >> x;
        sum += x;
    }
 
    sort(a.begin(), a.end());
 
    long long ans = sum - n * c;
 
    long long num = 0;
    for (int k = 1; k <= n / 2; k++) {
        num += a[k - 1];
        ans = max(ans, sum - n * c + k * c - num);
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