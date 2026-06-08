#include<bits/stdc++.h>
 
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
 
    if(n < 4 || n & 1) {
        cout << -1 << '
';
        return;
    }
 
    long long a = 0, b = 0;
 
    a = n / 6;
    
    if(n % 6 != 0) {
        a++;
    }
 
    b = n / 4;
 
    cout << a << " " << b << '
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