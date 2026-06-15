#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    vector<long long> a(n * k);
    for(auto &it : a) {
        cin >> it;
    }
 
    long long ans = 0;
    long long num = n / 2;
    long long i = n * k - 1 - num;
 
    for (int j = 0; j < k; j++) {
        ans += a[i];
        i -= num + 1;
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