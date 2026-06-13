#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    long long a, b;
    cin >> a >> b;
 
    if(a == b) {
        cout << 0 << " " << 0 << '
';
        return;
    }
 
    long long num = abs(a - b);
    long long rem = a % num;
    long long moves = min(rem, num - rem);
 
    cout << num << " " << moves << '
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