#include <bits/stdc++.h>
 
using namespace std;
 
long long mod = 998244353;
 
long long modpow(long long n) {
    long long a = 2, num = 1;
 
    while (n) {
        if (n & 1) {
            num = num * a % mod;
        }
        
        a = a * a % mod;
        n >>= 1;
        
    }
 
    return num;
}
 
void solve() {
    long long n, m, r, c;
    cin >> n >> m >> r >> c;
 
    long long ans = (r - 1) * m + n * (c - 1) - (r - 1) * (c - 1);
 
    cout << modpow(ans) << '
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