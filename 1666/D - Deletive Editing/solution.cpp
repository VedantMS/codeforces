#include<bits/stdc++.h>
 
using namespace std;
 
void solve() {
    string s, t;
    cin >> s >> t;
 
    vector<int> a(26, 0);
    for (char ch : t)        a[ch - 'A']++;
 
    string ans = "";
 
    for (int i = s.size() - 1; i >= 0; i--) {
        char ch = s[i];
 
        if (a[ch- 'A'] > 0) {
            ans += ch;
            a[ch - 'A']--;
        }
    }
 
    reverse(ans.begin(), ans.end());
 
    cout << (ans == t ? "YES" : "NO") << '
';
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
 
    while (n--) {
        solve();
    }
 
    return 0;
}