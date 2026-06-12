#include<bits/stdc++.h>
 
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    
    int n = s.size();
    int ans = n;
 
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            int val = (s[i] - '0') * 10 + (s[j] - '0');
            if(val % 25 == 0) {
                ans = min(ans, n - 2 - i);
            }
        }
    }
 
    cout << ans << '
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