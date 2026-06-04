#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
 
        string ans = "NO";
 
        if((a + b < n - 1) || (a == n && b == n)) {
            ans = "YES";
        }
 
        cout << ans << '
';
    }
 
    return 0;
}