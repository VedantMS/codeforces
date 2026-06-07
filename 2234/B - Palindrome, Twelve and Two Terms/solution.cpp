#include<bits/stdc++.h>
 
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
 
    if(n == 10) {
        cout << -1 << '
';
        return;
    }
 
    long long a = n % 12;
 
    if(a == 10) {
        a = 22;
    }
 
    cout << a << " " << n - a << '
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