#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    string s;
    cin >> s;
 
    int s0 = count(s.begin(), s.end(), '0');
    int s1 = s.size() - s0;
 
    int ans = min(s0, s1);
 
    cout<< (ans % 2 == 1 ? "DA" : "NET") << '
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